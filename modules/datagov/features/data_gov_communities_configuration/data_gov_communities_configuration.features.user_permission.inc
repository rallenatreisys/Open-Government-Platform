<?php
/**
 * @file
 * data_gov_communities_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function data_gov_communities_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: administer og menu.
  $permissions['administer og menu'] = array(
    'name' => 'administer og menu',
    'roles' => array(),
    'module' => 'og_menu',
  );

  return $permissions;
}
