<?php
/**
 * @file
 * issues_feed.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function issues_feed_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create candidate_issue content'.
  $permissions['create candidate_issue content'] = array(
    'name' => 'create candidate_issue content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any candidate_issue content'.
  $permissions['delete any candidate_issue content'] = array(
    'name' => 'delete any candidate_issue content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own candidate_issue content'.
  $permissions['delete own candidate_issue content'] = array(
    'name' => 'delete own candidate_issue content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any candidate_issue content'.
  $permissions['edit any candidate_issue content'] = array(
    'name' => 'edit any candidate_issue content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own candidate_issue content'.
  $permissions['edit own candidate_issue content'] = array(
    'name' => 'edit own candidate_issue content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
