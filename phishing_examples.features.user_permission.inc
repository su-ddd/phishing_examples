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

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Phishing Example Editor' => 'Phishing Example Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'Phishing Example Editor' => 'Phishing Example Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Phishing Example Editor' => 'Phishing Example Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create phishing_example content'.
  $permissions['create phishing_example content'] = array(
    'name' => 'create phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any phishing_example content'.
  $permissions['delete any phishing_example content'] = array(
    'name' => 'delete any phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own phishing_example content'.
  $permissions['delete own phishing_example content'] = array(
    'name' => 'delete own phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any phishing_example content'.
  $permissions['edit any phishing_example content'] = array(
    'name' => 'edit any phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own phishing_example content'.
  $permissions['edit own phishing_example content'] = array(
    'name' => 'edit own phishing_example content',
    'roles' => array(
      'Phishing Example Editor' => 'Phishing Example Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Phishing Example Editor' => 'Phishing Example Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'save_draft',
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

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Announcements Editor' => 'Announcements Editor',
      'Email Editor' => 'Email Editor',
      'Guide Editor' => 'Guide Editor',
      'HelpSU News Editor' => 'HelpSU News Editor',
      'Phishing Example Editor' => 'Phishing Example Editor',
      'Service Agreement Editor and Publisher' => 'Service Agreement Editor and Publisher',
      'Service Description Editor' => 'Service Description Editor',
      'Service and Service Information Editor' => 'Service and Service Information Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
