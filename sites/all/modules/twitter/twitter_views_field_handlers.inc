<?php
/**
 * @file
 * Views handlers for Twitter module.
 */

/**
 * Process Twitter-style @usernames and URLs before filtering XSS.
 */
class twitter_views_handler_field_xss extends views_handler_field {
  function option_definition() {
    $options = parent::option_definition();
    $options['link_urls'] = array('default' => TRUE);
    $options['link_usernames'] = array('default' => TRUE);
    $options['link_hashtags'] = array('default' => FALSE);
    $options['hashtags_url'] = array('default' => variable_get('twitter_search', TWITTER_SEARCH) . '/search?q=%23');
    $options['link_attributes'] = array('default' => TRUE);
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['link_urls'] = array(
      '#title' => t('Link urls to their destinations'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_urls']),
    );
    $form['link_usernames'] = array(
      '#title' => t('Link Twitter @usernames to their Twitter.com urls'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_usernames']),
    );
    $form['link_hashtags'] = array(
      '#title' => t('Link Twitter #hashtags to another url'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_hashtags']),
    );
    $form['hashtags_url'] = array(
      '#type' => 'textfield',
      '#default_value' => $this->options['hashtags_url'],
      '#process' => array('ctools_dependent_process'),
      '#dependency' => array('edit-options-link-hashtags' => array(TRUE)),
    );
    $form['link_attributes'] = array(
      '#title' => t('Open links in new windows/tabs and add rel="nofollow" attributes.'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_attributes']),
    );
  }

  /**
   * Processes the message through the selected options.
   */
  function render($values) {
    $value = $values->{$this->field_alias};
    if (!empty($this->options['link_urls'])) {
      $filter = new stdClass;
      $filter->settings = array(
        'filter_url_length' => 496,
      );
     $value = _filter_url($value, $filter);
    }
    // Link usernames with their profiles.
    if (!empty($this->options['link_usernames'])) {
      $value = _twitter_filter_text($value, '@', variable_get('twitter_host', TWITTER_HOST) . '/');
    }
    // Link hashtags.
    if (!empty($this->options['link_hashtags']) && valid_url($this->options['hashtags_url'])) {
      $value = _twitter_filter_text($value, '#', url($this->options['hashtags_url']));
    }
    // Add extra attributes to links.
    if (!empty($this->options['link_attributes'])) {
      $value = _twitter_filter_link($value, NULL);
    }
    // Avoid XSS within the message.
    return filter_xss($value);
  }
}

/**
 * Field handler to provide simple renderer that turns a URL into a clickable link.
 */
class twitter_views_handler_field_profile_image extends views_handler_field {
  function render($values) {
    $value = $values->{$this->field_alias};
    return theme('image', array('path' => $value, 'width' => 48, 'height' => 48));
  }
}

/**
 * Adds Twitter Intents links.
 *
 * @see https://dev.twitter.com/docs/intents
 */
class twitter_views_handler_field_web_intents extends views_handler_field {
  /**
   * Add twitter_id field, which is needed during rendering.
   */
  function construct() {
    parent::construct();
    $this->additional_fields['twitter_id'] = 'twitter_id';
  }

  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  function render($values) {
    drupal_add_js('//platform.twitter.com/widgets.js', 'external');
    return '<span><a href="https://twitter.com/intent/tweet?in_reply_to=' . $values->twitter_id . '">' . t('Reply') . '</a></span> ' .
      '<span><a href="https://twitter.com/intent/retweet?tweet_id=' . $values->twitter_id . '">' . t('Retweet') . '</a></span> ' .
      '<span><a href="https://twitter.com/intent/favorite?tweet_id=' . $values->twitter_id . '">' . t('Favorite') . '</a></span>';
  }
}

/**
 * Adds Twitter Follow link.
 *
 * @see https://dev.twitter.com/docs/intents#follow-intent
 */
class twitter_views_handler_field_follow extends views_handler_field {
  function query() {}

  function render($values) {
    drupal_add_js('//platform.twitter.com/widgets.js', 'external');
    return '<span><a href="https://twitter.com/intent/user?screen_name=' . $values->twitter_screen_name . '">' . t('Follow') . '</a></span>';
  }
}

/**
 * Renders a tweet as it is presented at Twitter.com.
 *
 * @see https://dev.twitter.com/terms/display-requirements
 */
class twitter_views_handler_field_formatted_tweet extends views_handler_field {
  function query() {}

  function render($values) {
    drupal_add_js('//platform.twitter.com/widgets.js', 'external');
    drupal_add_css(drupal_get_path('module', 'twitter') . '/twitter.css');
    module_load_include('inc', 'twitter');

    // Load tweet and author.
    $status = twitter_status_load($values->twitter_id);
    $author = twitter_account_load($status->screen_name, FALSE);

    // Format the timestamp.
    $time_diff = REQUEST_TIME - $values->twitter_created_time;

    // Format the message.
    $status->time_ago = t('%time ago', array('%time' => format_interval($time_diff, 2)));
    $filter = new stdClass;
      $filter->settings = array(
        'filter_url_length' => 496,
      );
    $status->text = _filter_url($status->text, $filter);

    // Render the tweet.
    return theme('twitter_status', array(
      'status' => $status,
      'author' => $author,
    ));
  }
}

/**
 * Renders the image attached to a tweet.
 */
class twitter_views_handler_field_image extends views_handler_field {

 /**
   * Default options form.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['size'] = array('default' => 'thumb');

    return $options;
  }

  /**
   * Creates the form item for the options added.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['size'] = array(
      '#type' => 'select',
      '#title' => t('Image size'),
      '#default_value' => $this->options['size'],
      '#options' => array(
        'thumb'  => t('Thumb'),
        'small'  => t('Small'),
        'medium' => t('Medium'),
        'large'  => t('Large'),
      ),
      '#description' => t('Choose an image size from the ones that Twitter has created for this image.'),
      '#weight' => -10,
    );
  }

  /**
   * Renders the image.
   */
  function render($values) {
    if (!empty($values->twitter_entities) && is_string($values->twitter_entities)) {
      $entities = unserialize($values->twitter_entities);

      // Loop over the tweet entities and render the image if it is present.
      if (!empty($entities['media']) && is_array($entities['media'])) {
        foreach ($entities['media'] as $media) {
          if (($media['type'] == 'photo') && !empty($media['media_url'])) {
            $image_path = $GLOBALS['is_https'] ? $media['media_url_https'] : $media['media_url'];
            $image_path .= ':' . $this->options['size'];
            return theme('image', array(
              'path' => $image_path,
              'attributes' => array('class' => 'tweet-image'),
            ));
          }
        }
      }
    }
  }
}
