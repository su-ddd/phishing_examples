<?php
/**
 * @file
 * phishing_examples.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function phishing_examples_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Phishing Email Warning';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'phishing_email_warning';
  $fe_block_boxes->body = '<p><strong>Warning:</strong> Do not explore links or email addresses in the examples&nbsp;shown here as these are real-life examples.</p>

<p><strong>Keep Stanford alert!</strong> <a href="https://helpsu.stanford.edu/helpsu/?pcat=iso-spam">Report suspected phishing email&nbsp;to the Information Security Office</a>. Be sure to include the entire text of the message and e-mail headers.</p>
';

  $export['phishing_email_warning'] = $fe_block_boxes;

  return $export;
}
