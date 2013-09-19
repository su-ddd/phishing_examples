<?php
/**
 * @file
 * phishing_examples.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function phishing_examples_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function phishing_examples_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function phishing_examples_node_info() {
  $items = array(
    'phishing_example' => array(
      'name' => t('Phishing Example'),
      'base' => 'node_content',
      'description' => t('Screenshots of email phishing email examples'),
      'has_title' => '1',
      'title_label' => t('Email Subject'),
      'help' => '',
    ),
  );
  return $items;
}
