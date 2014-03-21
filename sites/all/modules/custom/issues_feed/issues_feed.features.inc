<?php
/**
 * @file
 * issues_feed.features.inc
 */

/**
 * Implements hook_views_api().
 */
function issues_feed_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function issues_feed_image_default_styles() {
  $styles = array();

  // Exported image style: candidate_photo.
  $styles['candidate_photo'] = array(
    'name' => 'candidate_photo',
    'label' => 'Candidate Photo',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Crop',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 600,
          'height' => 400,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function issues_feed_node_info() {
  $items = array(
    'candidate_issue' => array(
      'name' => t('Candidate Issue'),
      'base' => 'node_content',
      'description' => t('Add an issue that the candidate cares about and explain why.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
