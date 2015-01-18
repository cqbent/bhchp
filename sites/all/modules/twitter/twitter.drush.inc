<?php
/**
 * @file
 * Drush commands for the Twitter module.
 */

/**
 * Implements COMMANDFILE_drush_command()
 */
function twitter_drush_command() {
  $items = array();

  $items['twitter-search'] = array(
    'description' => 'Searches the Twitter API for something.',
    'arguments' => array(
      'keyword' => 'The keyword you are searching for. Add @ for usernames and # for hashtags.',
    ),
    'required-arguments' => TRUE,
    'options' => array(
      'limit' => 'Limit the number of results to be printed.',
      'randomize' => 'Randomize the result.',
    ),
    'examples' => array(
      'drush twitter-search \'#drupal\'' => 'Pull tweets containing the hashtag #drupal.',
      'drush twitter-search \'#drupalconmunich\' --limit=1 --randomize' =>
        'Picks a random tweet containing \'#drupalconmunich\'.',
    ),
    'aliases' => array('tws'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_SITE,
    );
  return $items;
}

/**
 * Implements drush_COMMANDFILE_COMMANDNAME()
 *
 * Searches for a keyword at Twitter and return the results.
 */
function drush_twitter_search($keyword) {
  // Set up a Twitter object to query with.
  module_load_include('inc', 'twitter');
  $twitter = twitter_connect();

  if (empty($twitter)) {
    drush_set_error('At least one Twitter account must be authenticated at admin/config/services/twitter ' .
                    'in order to perform requests to the Twitter API.');
    return;
  }

  // Build the query and get the response.
  $url = variable_get('twitter_api', TWITTER_API) . '/1.1/search/tweets.json';
  $data = $twitter->auth_request($url, array('q' => $keyword));
  $data = json_decode($data);

  if (!count($data->statuses)) {
    drush_set_error(dt('No tweets found for this keyword.'));
  }
  else {
    drush_print(dt('There are !total tweets containing \'@keyword\'.', array(
      '!total' => $data->search_metadata->count,
      '@keyword' => $keyword,
    )));
    $tweets = $data->statuses;

    // Should we randomize?
    if (drush_get_option('randomize')) {
      $results = shuffle($tweets);
    }

    // Should we limit the list of results?
    if (drush_get_option('limit')) {
      $tweets = array_slice($tweets, 0, drush_get_option('limit'));
    }

    // Print results
    foreach ($tweets as $tweet) {
      drush_print('');
      drush_print(dt('User "@!user", tweeted "!tweet".', array(
        '!user' => $tweet->user->screen_name,
        '!tweet' => $tweet->text,
      )));
      drush_print('');
    }
  }
}
