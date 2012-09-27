<?php
/**
 * @file
 * datagov_announcements.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function datagov_announcements_user_default_permissions() {
  $permissions = array();

  // Exported permission: create announcements content.
  $permissions['create announcements content'] = array(
    'name' => 'create announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any announcements content.
  $permissions['delete any announcements content'] = array(
    'name' => 'delete any announcements content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own announcements content.
  $permissions['delete own announcements content'] = array(
    'name' => 'delete own announcements content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any announcements content.
  $permissions['edit any announcements content'] = array(
    'name' => 'edit any announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own announcements content.
  $permissions['edit own announcements content'] = array(
    'name' => 'edit own announcements content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content_creator',
      2 => 'content_moderator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
