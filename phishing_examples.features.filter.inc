<?php
/**
 * @file
 * phishing_examples.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function phishing_examples_filter_default_formats() {
  $formats = array();

  // Exported format: Phishing Email.
  $formats['phishing_email'] = array(
    'format' => 'phishing_email',
    'name' => 'Phishing Email',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
