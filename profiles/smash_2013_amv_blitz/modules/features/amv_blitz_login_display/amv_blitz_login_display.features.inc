<?php
/**
 * @file
 * amv_blitz_login_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amv_blitz_login_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
