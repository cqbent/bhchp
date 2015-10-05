<?php
/**
 * @file
 * bhchp_social_feeds.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bhchp_social_feeds_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_social_feeds';
  $context->description = 'Homepage social feeds';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-social_feed_blocks' => array(
          'module' => 'panels_mini',
          'delta' => 'social_feed_blocks',
          'region' => 'content',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage social feeds');
  $export['homepage_social_feeds'] = $context;

  return $export;
}
