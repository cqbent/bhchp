<?php
/**
 * @file
 * bhchp_facebookimport.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function bhchp_facebookimport_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'facebook_feed';
  $feeds_importer->config = array(
    'name' => 'facebook_feed',
    'description' => 'facebook post ingester',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsFacebookParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '604800',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'post_id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'created_time',
            'target' => 'created',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'description',
            'target' => 'body',
            'format' => 'plain_text',
          ),
          4 => array(
            'source' => 'message',
            'target' => 'body:summary',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'link',
            'target' => 'url',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'facebook_feed',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '10800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['facebook_feed'] = $feeds_importer;

  return $export;
}
