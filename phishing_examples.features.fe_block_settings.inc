<?php
/**
 * @file
 * phishing_examples.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function phishing_examples_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-phishing_email_warning'] = array(
    'cache' => -1,
    'css_class' => 'well',
    'custom' => 0,
    'machine_name' => 'phishing_email_warning',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'phishing
phishing/*',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'stanford_itservices',
        'weight' => -64,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-phishing_examples-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'phishing_examples-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'phishing
phishing/*',
    'roles' => array(),
    'themes' => array(
      'itservices_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'itservices_seven',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'stanford_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_framework',
        'weight' => 0,
      ),
      'stanford_itservices' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'stanford_itservices',
        'weight' => -63,
      ),
      'stanford_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'stanford_seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
