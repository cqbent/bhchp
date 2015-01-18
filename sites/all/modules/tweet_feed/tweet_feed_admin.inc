<?php

/**
 * Accounts Table
 *
 * A table to list the Twitter accounts associated with this install that can be used
 * to bring in feeds to the database.
 */
function tweet_feed_accounts_table() {
  // Set up the right breadcrumbs
  $breadcrumbs = array();
  $breadcrumbs[] = l('Home', '<front>');
  $breadcrumbs[] = l('Administration', 'admin');
  $breadcrumbs[] = l('Configuration', 'admin/config');
  $breadcrumbs[] = l('Web Services', 'admin/config/services');
  $breadcrumbs[] = l('Tweet Feed Accounts', 'admin/config/services/tweet_feed/accounts');
  drupal_set_breadcrumb($breadcrumbs);

  $rows = array();
  $header = array(
    'account_name' => array('data' => t('Account name'), 'style' => 'text-align: center;'),
    'uses' => array('data' => t('# Uses'), 'style' => 'text-align: center;'),
    'consumer_key' => array('data' => t('Consumer Key'), 'style' => 'text-align: center;'),
    'oauth_token' => array('data' => t('Oauth Token'), 'style' => 'text-align: center;'),
    'edit' => array('data' => t('Edit'), 'style' => 'text-align: center;'),
    'delete' => array('data' => t('Delete'), 'style' => 'text-align: center;'),
  );
  
  $result = db_query('SELECT * FROM {tweet_accounts} ORDER BY account_name ASC');
  while ($data = $result->fetchObject()) {
    // Determine how many queries this feed is responsible for
    $count = db_query("SELECT COUNT(*) AS number FROM {tweet_feeds} WHERE aid = :aid", array(':aid' => $data->aid))->fetchField();
    
    $row = array();
    $row[] = $data->account_name;
    $row[] = (array('data' => $count, 'align' => 'center'));
    $row[] = (array('data' => $data->consumer_key, 'align' => 'center'));
    $row[] = (array('data' => $data->oauth_token, 'align' => 'center'));
    $row[] = (array('data' => l(t('Edit'), 'admin/config/services/tweet_feed/accounts/edit/' . $data->aid), 'align' => 'center'));
    $row[] = (array('data' => l(t('Delete'), 'admin/config/services/tweet_feed/accounts/delete/' . $data->aid), 'align' => 'center'));
    $rows[] = $row;
  }
  
  if (count($rows) == 0) {
    $rows = array(
      array(
        'data' => array(array('align' => 'center', 'colspan' => 6, 'data' => t('THERE ARE CURRENTLY NO CONFIGURED TWITTER ACCOUNTS.')))
      ),
    );
  }
  $output = theme('table', array('header'=>$header, 'rows' => $rows));
  return $output;
}

/**
 * Feeds Table
 *
 * A table of configured feeds we will pull on each cron run or drush command. Each feed
 * can be tied to a specific feed account above.
 */
function tweet_feed_feeds_table() {
  // Set up the right breadcrumbs
  $breadcrumbs = array();
  $breadcrumbs[] = l('Home', '<front>');
  $breadcrumbs[] = l('Administration', 'admin');
  $breadcrumbs[] = l('Configuration', 'admin/config');
  $breadcrumbs[] = l('Web Services', 'admin/config/services');
  $breadcrumbs[] = l('Tweet Feed Feeds', 'admin/config/services/tweet_feed/feeds');
  drupal_set_breadcrumb($breadcrumbs);

  $rows = array();
  $header = array(
    'feed_name' => array('data' => t('Feed name'), 'style' => 'text-align: center;'),
    'feed_type' => array('data' => t('Type'), 'style' => 'text-align: center;'),
    'feed_criteria' => array('data' => t('Feed Criteria'), 'style' => 'text-align: center;'),
    'number_per_pull' => array('data' => t('# Per Pull'), 'style' => 'text-align: center;'),
    'new_window' => array('data' => t('New Window'), 'style' => 'text-align: center;'),
    'truncate' => array('data' => t('Truncate'), 'style' => 'text-align: center;'),
    'edit' => array('data' => t('Edit'), 'style' => 'text-align: center;'),
    'delete' => array('data' => t('Delete'), 'style' => 'text-align: center;'),
  );
  
  $result = db_query('SELECT * FROM {tweet_feeds} ORDER BY feed_name ASC');
  while ($data = $result->fetchObject()) {
  
    switch ($data->query_type) {
      case QUERY_SEARCH:
        $query_type = 'Timeline Search';
        $feed_criteria = $data->search_term;
        break;
      case QUERY_TIMELINE:
        $query_type = 'User Timeline';
        $feed_criteria = $data->timeline_id;
        break;
      case QUERY_LIST:
        $query_type = 'User List';
        $feed_criteria = $data->timeline_id . '/' . $data->list_name;
        break;
      default:
        $query_type = t('Unknown');
        $feed_criteria = t('Unknown');
    }
  
    $row = array();
    $row[] = $data->feed_name;
    $row[] = (array('data' => $query_type, 'align' => 'center'));
    $row[] = (array('data' => $feed_criteria, 'align' => 'center'));
    $row[] = (array('data' => $data->pull_count, 'align' => 'center'));
    $row[] = (array('data' => $data->clear_prior, 'align' => 'center'));
    $row[] = (array('data' => $data->new_window, 'align' => 'center'));
    $row[] = (array('data' => l(t('Edit'), 'admin/config/services/tweet_feed/feeds/edit/' . $data->fid), 'align' => 'center'));
    $row[] = (array('data' => l(t('Delete'), 'admin/config/services/tweet_feed/feeds/delete/' . $data->fid), 'align' => 'center'));
    $rows[] = $row;
  }
  
  if (count($rows) == 0) {
    $rows = array(
      array(
        'data' => array(array('align' => 'center', 'colspan' => 8, 'data' => t('THERE ARE CURRENTLY NO CONFIGURED TWITTER FEEDS.')))
      ),
    );
  }
  $output = theme('table', array('header'=>$header, 'rows' => $rows));
  return $output;
}


/**
 * Settings form 
 * our settings for for oauth tokens and search queries
 */
function tweet_feed_account_form($form, &$form_state, $aid = 0) {
  // Set up the right breadcrumbs
  $breadcrumbs = array();
  $breadcrumbs[] = l('Home', '<front>');
  $breadcrumbs[] = l('Administration', 'admin');
  $breadcrumbs[] = l('Configuration', 'admin/config');
  $breadcrumbs[] = l('Web Services', 'admin/config/services');
  $breadcrumbs[] = l('Tweet Feed Accounts', 'admin/config/services/tweet_feed/accounts');
  $breadcrumbs[] = l('Tweet Feed Account Form', substr(request_uri(),1));
  drupal_set_breadcrumb($breadcrumbs);

  // If we are being passed an aid, then we are updating the form and need to repopulate
  // the values and tell the processor that we are updating and not creating new.
  if (!empty($aid)) {
    $result = db_query('SELECT * FROM {tweet_accounts}
                        WHERE aid=:aid', array(':aid' => $aid))->fetchObject();
    $account_name = $result->account_name;
    $consumer_key = $result->consumer_key;
    $consumer_secret = $result->consumer_secret;
    $oauth_token = $result->oauth_token;
    $oauth_token_secret = $result->oauth_token_secret;
  }
  else {
    // Otherwise just initialize the form so we do not have a swath of errors 
    $aid = $account_name = $consumer_key = $consumer_secret = NULL;
    $oauth_token = $oauth_token_secret = NULL;
  }
  
  // Set up our settings form for this particular account (new or update)
  if (!empty($aid)) {
    $form['aid'] = array(
      '#type' => 'hidden',
      '#value' => $aid,
    );
  }
  $form['tweet_feed_account'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tweet Feed Account Information Form'),
    '#description' => t('Provide information about the Twitter account you wish to add. These can be used to get the feeds for any of our configurable options.'),
  );
  $form['tweet_feed_account']['account_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Account Name'),
    '#max_length' => 128,
    '#required' => TRUE,
    '#default_value' => $account_name,
  );
  $form['tweet_feed_account']['consumer_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Consumer Key'),
    '#max_length' => 255,
    '#required' => TRUE,
    '#default_value' => $consumer_key,
  );
  $form['tweet_feed_account']['consumer_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('Consumer Secret'),
    '#max_length' => 255,
    '#required' => TRUE,
    '#default_value' => $consumer_secret,
  );
  $form['tweet_feed_account']['oauth_token'] = array(
    '#type' => 'textfield',
    '#title' => t('Oauth Token'),
    '#max_length' => 255,
    '#required' => TRUE,
    '#default_value' => $oauth_token,
  );
  $form['tweet_feed_account']['oauth_token_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('Oauth Token Secret'),
    '#max_length' => 255,
    '#required' => TRUE,
    '#default_value' => $oauth_token_secret,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save Form'),
  );
  return $form;
}

/**
 * Submit handler for accounts form
 *
 * Take the account information and either save it to a new record or update
 * an existing one
 */
function tweet_feed_account_form_submit($form, &$form_state) {
  // Get a shortcut for our $form_state['values'] array
  $values = $form_state['values'];
  
  // Define our array of data provided by the form
  $data = array(
    'account_name' => $values['account_name'],
    'consumer_key' => $values['consumer_key'],
    'consumer_secret' => $values['consumer_secret'],
    'oauth_token' => $values['oauth_token'],
    'oauth_token_secret' => $values['oauth_token_secret'],
  );
  
  // If aid is empty then we're creating a new record. Otherwise we are updating an
  // existing one and need to call the proper drupal_write_record function accordingly.
  if (!empty($values['aid'])) {
    $data['aid'] = $values['aid'];
    $status = drupal_write_record('tweet_accounts', $data, array('aid'));
  } 
  else {
    $status = drupal_write_record('tweet_accounts', $data); 
  }
  
  // Go back to the list of accounts when we are done.
  $form_state['redirect'] = 'admin/config/services/tweet_feed/accounts';
  
  // Set the status message based on the result we get from writing our record.
  switch ($status) {
    case SAVED_NEW:
      drupal_set_message('New Twitter account has been successfully added.', 'status');
      break;
    case SAVED_UPDATED:
      drupal_set_message('Twitter account has been successfully updated.', 'status');
      break;
    case FALSE:
    default:
      drupal_set_message('The Twitter details provided could not be properly saved to the database.', 'error');
      break;
  }
}

function tweet_feed_feeds_form($form, &$form_state, $fid = 0) {
  $breadcrumbs = array();
  $breadcrumbs[] = l('Home', '<front>');
  $breadcrumbs[] = l('Administration', 'admin');
  $breadcrumbs[] = l('Configuration', 'admin/config');
  $breadcrumbs[] = l('Web Services', 'admin/config/services');
  $breadcrumbs[] = l('Tweet Feed Feeds', 'admin/config/services/tweet_feed/feeds');
  $breadcrumbs[] = l('Tweet Feed Feeds Form', substr(request_uri(),1));
  drupal_set_breadcrumb($breadcrumbs);

  // If we are being passed an aid, then we are updating the form and need to repopulate
  // the values and tell the processor that we are updating and not creating new.
  if (!empty($fid)) {
    $result = db_query('SELECT * FROM {tweet_feeds}
                        WHERE fid=:fid', array(':fid' => $fid))->fetchObject();
    $fid = $result->fid;
    $aid = $result->aid;
    $feed_name = $result->feed_name;
    $query_type = $result->query_type;
    $timeline_id = $result->timeline_id;
    $search_term = $result->search_term;
    $list_name = $result->list_name;
    $pull_count = $result->pull_count;
    $clear_prior = $result->clear_prior;
    $new_window = $result->new_window;
  }
  else {
    // Otherwise just initialize the form so we do not have a swath of errors 
    $fid = $aid = $query_type = $search_term = $list_name = $feed_name = NULL;
    $twitter_user_id = $pull_count = $new_window = $clear_prior = $timeline_id = NULL;
  }
  
  // Set up our settings for this particular feed (or update if it already exists)
  if (!empty($fid)) {
    $form['fid'] = array(
      '#type' => 'hidden',
      '#value' => $fid,
    );
  }
  $form['tweet_feed_query_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Twitter Query Settings'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#weight' => 2,
  );
  $form['tweet_feed_query_settings']['feed_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Feed Name'),
    '#description' => t('The name of the feed as it will appear on administrative forms'),
    '#default_value' => $feed_name,
    '#required' => TRUE,
  );
  
  // Get a list of the configured accounts so we can assign this feed to a particular
  // API account for pulling and allow user to select which one to use
  $result = db_query('SELECT aid, account_name FROM {tweet_accounts} ORDER BY account_name');
  while($adata = $result->fetchObject()) {
    $accounts[$adata->aid] = $adata->account_name;
  }
  $form['tweet_feed_query_settings']['aid'] = array(
    '#type' => 'select',
    '#title' => t('API Account To Use For Pulling This Feed'),
    '#options' => $accounts,
    '#default_value' => $aid,
    '#required' => TRUE,
  );
  
  $form['tweet_feed_query_settings']['query_type'] = array(
    '#type' => 'radios',
    '#title' => t('Type of Twitter Query'),
    '#options' => array(
      QUERY_SEARCH => t('Twitter Search'),
      QUERY_TIMELINE => t('User Timeline Display'),
      QUERY_LIST => t('User List Display'),
    ),
    '#required' => TRUE,
    '#default_value' => $query_type,
  );
  $form['tweet_feed_query_settings']['search_term'] = array(
    '#type' => 'textfield',
    '#title' => t('Twitter Search Term'),
    '#max_length' => 255,
    '#default_value' => $search_term,
    '#states' => array(
      'visible' => array(
        ':input[name="query_type"]' => array('value' => QUERY_SEARCH),
      ),
    ),
  );
  $form['tweet_feed_query_settings']['timeline_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Exact Twitter User ID For Timline Query'),
    '#description' => t('You can get this by going to mytwitterid.com'),
    '#max_length' => 255,
    '#default_value' => $timeline_id,
    '#states' => array(
      'visible' => array(
        ':input[name="query_type"]' => array(
          array('value' => QUERY_TIMELINE),
          array('value' => QUERY_LIST),
        ),
      ),
    ),
  );
  $form['tweet_feed_query_settings']['list_name'] = array(
    '#type' => 'textfield',
    '#title' => t('List name'),
    '#description' => t('Enter the list name exactly as it appears on twitter.com'),
    '#max_length' => 255,
    '#default_value' => $list_name,
    '#states' => array(
      'visible' => array(
        ':input[name="query_type"]' => array('value' => QUERY_LIST),
      ),
    ),
  );  
  $form['tweet_feed_query_settings']['pull_count'] = array(
    '#type' => 'select',
    '#title' => t('Number of Items to Pull'),
    '#max_length' => 2,
    '#options' => array(
      '100' => '100',
      '200' => '200',
      '300' => '300',
      '400' => '400',
      '500' => '500',
      '600' => '600',
      '700' => '700',
      '800' => '800',
      '900' => '900',
      '1000' => '1000'
    ),
    '#description' => t('Twitter limits tweet pulling to 1500 every 15 minutes. Keep this in mind when setting the pull count in conjunction with the frequency of cron/drush runs.'),
    '#required' => TRUE,
    '#default_value' => $pull_count,
  );
  $form['tweet_feed_query_settings']['new_window'] = array(
    '#type' => 'checkbox',
    '#title' => t('Open tweeted links, hashtags and mentions in a new window.'),
    '#default_value' => $new_window,
  );
  $form['tweet_feed_query_settings']['clear_prior'] = array(
    '#type' => 'checkbox',
    '#title' => t('Remove all tweets in this feed prior to import.'),
    '#default_value' => $clear_prior,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit Settings Form'),
    '#weight' => 3,
  );
  return $form;
}

/**
 * Submit handler for accounts form
 *
 * Take the account information and either save it to a new record or update
 * an existing one
 */
function tweet_feed_feeds_form_submit($form, &$form_state) {
  // Get a shortcut for our $form_state['values'] array
  $values = $form_state['values'];
  
  // Define our array of data provided by the form
  $data = array(
    'aid' => $values['aid'],
    'feed_name' => $values['feed_name'],
    'query_type' => $values['query_type'],
    'timeline_id' => $values['timeline_id'],
    'search_term' => $values['search_term'],
    'list_name' => $values['list_name'],
    'pull_count' => $values['pull_count'],
    'clear_prior' => $values['clear_prior'],
    'new_window' => $values['new_window'],
  );
  
  // If aid is empty then we're creating a new record. Otherwise we are updating an
  // existing one and need to call the proper drupal_write_record function accordingly.
  if (!empty($values['fid'])) {
    $data['fid'] = $values['fid'];
    $status = drupal_write_record('tweet_feeds', $data, array('fid'));
  } 
  else {
    $status = drupal_write_record('tweet_feeds', $data); 
  }
  
  // Go back to the list of accounts when we are done.
  $form_state['redirect'] = 'admin/config/services/tweet_feed/feeds';
  
  // Set the status message based on the result we get from writing our record.
  switch ($status) {
    case SAVED_NEW:
      drupal_set_message('New Twitter feed has been successfully added.', 'status');
      break;
    case SAVED_UPDATED:
      drupal_set_message('Twitter feed has been successfully updated.', 'status');
      break;
    case FALSE:
    default:
      drupal_set_message('The Twitter feed details provided could not be properly saved to the database.', 'error');
      break;
  }
}

/**
 * General Settings Form
 *
 * A place to set up various global options for all tweet feeds
 */
function tweet_feed_settings_form($form, &$form_state) {
  $form['tweet_feed_get_tweeter_profiles'] = array(
    '#type' => 'checkbox',
    '#title' => t('Save user profile information for each unique tweeter in feeds.'),
    '#description' => t('This will create a node record for every person who tweets in your feed.'),
    '#default_value' => variable_get('tweet_feed_get_tweeter_profiles', 0),
  );
  return system_settings_form($form);
}
