<?php
/**
 * @file
 * phishing_examples.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function phishing_examples_user_default_roles() {
  $roles = array();

  // Exported role: Phishing Example Editor.
  $roles['Phishing Example Editor'] = array(
    'name' => 'Phishing Example Editor',
    'weight' => 119,
  );

  return $roles;
}
