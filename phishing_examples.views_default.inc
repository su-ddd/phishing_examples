<?php
/**
 * @file
 * phishing_examples.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function phishing_examples_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'phishing_examples';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Phishing Examples';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent examples of phishing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class="lead">These are some examples of phishing emails seen on campus. Do NOT assume a suspect email is safe, just because it is not listed here. There are many variants of each, and new ones are being sent out each day.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'standard',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_date])';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Screenshot (Optional) */
  $handler->display->display_options['fields']['field_phishing_screenshot']['id'] = 'field_phishing_screenshot';
  $handler->display->display_options['fields']['field_phishing_screenshot']['table'] = 'field_data_field_phishing_screenshot';
  $handler->display->display_options['fields']['field_phishing_screenshot']['field'] = 'field_phishing_screenshot';
  $handler->display->display_options['fields']['field_phishing_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_phishing_screenshot']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phishing_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phishing_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_phishing_screenshot']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'phishing_example' => 'phishing_example',
  );

  /* Display: Recent Examples Page */
  $handler = $view->new_display('page', 'Recent Examples Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'phishing';

  /* Display: List of Phishing Email Examples Block */
  $handler = $view->new_display('block', 'List of Phishing Email Examples Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Phishing email examples';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'well';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<i class="icon-envelope"></i><h2 class="block-heading">More Phishing Examples</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $export['phishing_examples'] = $view;

  return $export;
}
