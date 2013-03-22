<?php
/**
 * @file
 * icm_wysiwyg_editor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function icm_wysiwyg_editor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
