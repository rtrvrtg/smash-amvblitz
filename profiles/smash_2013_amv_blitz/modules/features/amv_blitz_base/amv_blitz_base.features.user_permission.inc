<?php
/**
 * @file
 * amv_blitz_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amv_blitz_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create amv_entry registration.
  $permissions['create amv_entry registration'] = array(
    'name' => 'create amv_entry registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create amv_entry registration other anonymous.
  $permissions['create amv_entry registration other anonymous'] = array(
    'name' => 'create amv_entry registration other anonymous',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: create amv_entry registration other users.
  $permissions['create amv_entry registration other users'] = array(
    'name' => 'create amv_entry registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  return $permissions;
}
