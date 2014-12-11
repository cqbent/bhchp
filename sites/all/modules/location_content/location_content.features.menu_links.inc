<?php
/**
 * @file
 * location_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function location_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_locationlist:locationlist
  $menu_links['main-menu_locationlist:locationlist'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'locationlist',
    'router_path' => 'locationlist',
    'link_title' => 'locationlist',
    'options' => array(
      'identifier' => 'main-menu_locationlist:locationlist',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_locations:locations
  $menu_links['main-menu_locations:locations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'locations',
    'router_path' => 'locations',
    'link_title' => 'Locations',
    'options' => array(
      'identifier' => 'main-menu_locations:locations',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Locations');
  t('locationlist');


  return $menu_links;
}
