<?php
/**
 * @file
 * amv_blitz_base.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function amv_blitz_base_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blitz_round|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blitz_round';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_entries',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_entries' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|blitz_round|default'] = $ds_layout;

  return $export;
}
