<?php
/**
 * @file
 * bhchp_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bhchp_users_user_default_roles() {
  $roles = array();

  // Exported role: leadership and staff.
  $roles['leadership and staff'] = array(
    'name' => 'leadership and staff',
    'weight' => 3,
  );

  return $roles;
}
