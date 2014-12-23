<?php
/**
 * @file
 * bhchp_ui_general.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bhchp_ui_general_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Exported menu: menu-top-menu.
  $menus['menu-top-menu'] = array(
    'menu_name' => 'menu-top-menu',
    'title' => 'Top Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Menu');
  t('Top Menu');


  return $menus;
}
