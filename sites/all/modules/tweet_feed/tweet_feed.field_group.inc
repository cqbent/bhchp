<?php
/**
 * @file
 * tweet_feed.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tweet_feed_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geo_location|node|twitter_tweet_feed|form';
  $field_group->group_name = 'group_geo_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'twitter_tweet_feed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Geo Location',
    'weight' => '13',
    'children' => array(
      0 => 'field_geographic_coordinates',
      1 => 'field_geographic_place',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-geo-location field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_geo_location|node|twitter_tweet_feed|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|node|twitter_user_profile|form';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'twitter_user_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile Data',
    'weight' => '12',
    'children' => array(
      0 => 'field_background_color',
      1 => 'field_background_image',
      2 => 'field_profile_image',
      3 => 'field_banner_image',
      4 => 'field_link_color',
      5 => 'field_sidebar_border_color',
      6 => 'field_sidebar_fill_color',
      7 => 'field_profile_text_color',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile|node|twitter_user_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_mentions|node|twitter_tweet_feed|form';
  $field_group->group_name = 'group_user_mentions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'twitter_tweet_feed';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'User Mentions',
    'weight' => '13',
    'children' => array(
      0 => 'field_mention_screen_name',
      1 => 'field_mention_name',
      2 => 'field_mention_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-mentions field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_mentions|node|twitter_tweet_feed|form'] = $field_group;

  return $export;
}
