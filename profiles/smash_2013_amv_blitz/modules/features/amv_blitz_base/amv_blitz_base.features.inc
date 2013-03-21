<?php
/**
 * @file
 * amv_blitz_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amv_blitz_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function amv_blitz_base_node_info() {
  $items = array(
    'blitz_round' => array(
      'name' => t('Blitz Round'),
      'base' => 'node_content',
      'description' => t('New blitz round!'),
      'has_title' => '1',
      'title_label' => t('Round Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function amv_blitz_base_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "0",
    "show_on_form" : "0",
    "weight" : "1"
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "1",
    "active" : "1",
    "show_on_form" : "0",
    "weight" : "1"
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "0",
    "active" : "0",
    "show_on_form" : "0",
    "weight" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function amv_blitz_base_default_registration_type() {
  $items = array();
  $items['amv_entry'] = entity_import('registration_type', '{
    "name" : "amv_entry",
    "label" : "AMV Entry",
    "locked" : "0",
    "weight" : "0",
    "data" : null
  }');
  return $items;
}
