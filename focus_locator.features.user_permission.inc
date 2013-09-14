<?php
/**
 * @file
 * focus_locator.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function focus_locator_user_default_permissions() {
  $permissions = array();

  // Exported permission: create focus_locator_location content
  $permissions['create focus_locator_location content'] = array(
    'name' => 'create focus_locator_location content',
    'roles' => array(),
  );

  // Exported permission: delete any focus_locator_location content
  $permissions['delete any focus_locator_location content'] = array(
    'name' => 'delete any focus_locator_location content',
    'roles' => array(),
  );

  // Exported permission: delete own focus_locator_location content
  $permissions['delete own focus_locator_location content'] = array(
    'name' => 'delete own focus_locator_location content',
    'roles' => array(),
  );

  // Exported permission: edit any focus_locator_location content
  $permissions['edit any focus_locator_location content'] = array(
    'name' => 'edit any focus_locator_location content',
    'roles' => array(),
  );

  // Exported permission: edit own focus_locator_location content
  $permissions['edit own focus_locator_location content'] = array(
    'name' => 'edit own focus_locator_location content',
    'roles' => array(),
  );

  return $permissions;
}
