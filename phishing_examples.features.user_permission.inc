<?php
/**
 * @file
 * phishing_examples.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function phishing_examples_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create phishing_example content'.
  $permissions['create phishing_example content'] = array(
    'name' => 'create phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
	  'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any phishing_example content'.
  $permissions['delete any phishing_example content'] = array(
    'name' => 'delete any phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
	  'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own phishing_example content'.
  $permissions['delete own phishing_example content'] = array(
    'name' => 'delete own phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
	  'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any phishing_example content'.
  $permissions['edit any phishing_example content'] = array(
    'name' => 'edit any phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
	  'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own phishing_example content'.
  $permissions['edit own phishing_example content'] = array(
    'name' => 'edit own phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
	  'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format phishing_email'.
  $permissions['use text format phishing_email'] = array(
    'name' => 'use text format phishing_email',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
