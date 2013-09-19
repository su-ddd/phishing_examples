<?php
/**
 * @file
 * phishing_examples.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function phishing_examples_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-phishing_example-body'
  $field_instances['node-phishing_example-body'] = array(
    'bundle' => 'phishing_example',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe how someone could recognize this as a phishing attempt. Where links hidden in the email? Was the tone of the email urgent, requiring immediate action? Did it ask for a username and password, which IT Services would never ask for? Don\'t copy the text of the email in this field. Use the field above.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description (Tips on How to recognize this example as a phishing attempt)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'phishing_email' => 'phishing_email',
          'php_use_with_caution_' => 'php_use_with_caution_',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'phishing_email' => array(
              'weight' => 0,
            ),
            'php_use_with_caution_' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-phishing_example-field_date'
  $field_instances['node-phishing_example-field_date'] = array(
    'bundle' => 'phishing_example',
    'deleted' => 0,
    'description' => 'Enter the approximate date the phishing email was first seen at Stanford.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'updated_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-phishing_example-field_phishing_example_text'
  $field_instances['node-phishing_example-field_phishing_example_text'] = array(
    'bundle' => 'phishing_example',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Copy and paste the text of the original phishing email here. Make sure to remove any links that could be followed by people, replacing them with [LINK REMOVED] or something similar.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phishing_example_text',
    'label' => 'Phishing Example - Text of Email',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 0,
          'phishing_email' => 'phishing_email',
          'php_use_with_caution_' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 1,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => -48,
            ),
            'phishing_email' => array(
              'weight' => -50,
            ),
            'php_use_with_caution_' => array(
              'weight' => -49,
            ),
            'plain_text' => array(
              'weight' => -47,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-phishing_example-field_phishing_screenshot'
  $field_instances['node-phishing_example-field_phishing_screenshot'] = array(
    'bundle' => 'phishing_example',
    'deleted' => 0,
    'description' => 'Upload a screenshot of the email if it\'s a better way to show the phishing example.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phishing_screenshot',
    'label' => 'Screenshot (Optional)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_phone' => 0,
          'image_thumbnail' => 0,
          'image_topic' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Copy and paste the text of the original phishing email here. Make sure to remove any links that could be followed by people, replacing them with [LINK REMOVED] or something similar.');
  t('Date');
  t('Describe how someone could recognize this as a phishing attempt. Where links hidden in the email? Was the tone of the email urgent, requiring immediate action? Did it ask for a username and password, which IT Services would never ask for? Don\'t copy the text of the email in this field. Use the field above.');
  t('Description (Tips on How to recognize this example as a phishing attempt)');
  t('Enter the approximate date the phishing email was first seen at Stanford.');
  t('Phishing Example - Text of Email');
  t('Screenshot (Optional)');
  t('Upload a screenshot of the email if it\'s a better way to show the phishing example.');

  return $field_instances;
}
