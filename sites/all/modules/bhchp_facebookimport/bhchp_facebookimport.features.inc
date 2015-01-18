<?php
/**
 * @file
 * bhchp_facebookimport.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bhchp_facebookimport_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bhchp_facebookimport_node_info() {
  $items = array(
    'facebook_feed' => array(
      'name' => t('Facebook feed'),
      'base' => 'node_content',
      'description' => t('Facebook feeds are posted as nodes here automatically.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
