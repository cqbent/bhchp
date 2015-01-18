<?php

/**
 * Implements hook_drush_command
 */
function tweet_feed_drush_command() {
  $items = array();
  $items['tf-import-tweets'] = array(
    'description' => t('Import All Tweets'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );
  return $items;
}

/**
 * Import Tweets
 *
 * Drush command to import all tweets from all feeds. 
 * TODO: Allow specifying import by feed id or machine name
 *
 * Implements drush_HOOK_COMMAND
 */
function drush_tweet_feed_tf_import_tweets() {
  tweet_feed_process_all_feeds();
}