<?php
/**
 * @file
 * bhchp_facebookimport.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bhchp_facebookimport_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_facebook_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_facebook_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_facebook_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_facebook_feed';
  $strongarm->value = '0';
  $export['comment_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_facebook_feed';
  $strongarm->value = 1;
  $export['comment_form_location_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_facebook_feed';
  $strongarm->value = '1';
  $export['comment_preview_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_facebook_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_facebook_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_facebook_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_facebook_feed';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_facebook_feed';
  $strongarm->value = '1';
  $export['node_preview_facebook_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_facebook_feed';
  $strongarm->value = 0;
  $export['node_submitted_facebook_feed'] = $strongarm;

  return $export;
}
