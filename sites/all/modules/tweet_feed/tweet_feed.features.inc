<?php
/**
 * @file
 * tweet_feed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tweet_feed_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tweet_feed_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function tweet_feed_image_default_styles() {
  $styles = array();

  // Exported image style: tweet_feed_thumbnail.
  $styles['tweet_feed_thumbnail'] = array(
    'name' => 'tweet_feed_thumbnail',
    'label' => 'Tweet Feed Thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 73,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 73,
          'height' => 73,
          'anchor' => 'left-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function tweet_feed_node_info() {
  $items = array(
    'twitter_tweet_feed' => array(
      'name' => t('Twitter Tweet Feed'),
      'base' => 'node_content',
      'description' => t('These are the Tweets collected by the Tweet Feed module.'),
      'has_title' => '1',
      'title_label' => t('Tweet Title'),
      'help' => '',
    ),
    'twitter_user_profile' => array(
      'name' => t('Twitter User Profile'),
      'base' => 'node_content',
      'description' => t('The profile of a person who has made a tweet that has been index by your configuration of Tweet Feed. Includes relevant images and Tweet data.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
