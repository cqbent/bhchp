<?php
/**
 * @file
 * bhchp_registrations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bhchp_registrations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create bhchp_drive registration'.
  $permissions['create bhchp_drive registration'] = array(
    'name' => 'create bhchp_drive registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create bhchp_drive registration other anonymous'.
  $permissions['create bhchp_drive registration other anonymous'] = array(
    'name' => 'create bhchp_drive registration other anonymous',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
