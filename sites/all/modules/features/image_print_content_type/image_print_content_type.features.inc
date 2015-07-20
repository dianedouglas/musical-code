<?php
/**
 * @file
 * image_print_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_print_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function image_print_content_type_node_info() {
  $items = array(
    'image_print' => array(
      'name' => t('Image Print'),
      'base' => 'node_content',
      'description' => t('A single uploaded image with a title and description. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
