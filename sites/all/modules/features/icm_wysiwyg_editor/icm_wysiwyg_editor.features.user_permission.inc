<?php
/**
 * @file
 * icm_wysiwyg_editor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function icm_wysiwyg_editor_user_default_permissions() {
  $permissions = array();

  // Exported permission: access ckeditor link.
  $permissions['access ckeditor link'] = array(
    'name' => 'access ckeditor link',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site developer',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: administer ckeditor link.
  $permissions['administer ckeditor link'] = array(
    'name' => 'administer ckeditor link',
    'roles' => array(
      0 => 'site developer',
    ),
    'module' => 'ckeditor_link',
  );

  // Exported permission: administer wysiwyg templates.
  $permissions['administer wysiwyg templates'] = array(
    'name' => 'administer wysiwyg templates',
    'roles' => array(
      0 => 'site developer',
    ),
    'module' => 'wysiwyg_template',
  );

  // Exported permission: import wysiwyg templates.
  $permissions['import wysiwyg templates'] = array(
    'name' => 'import wysiwyg templates',
    'roles' => array(
      0 => 'site developer',
    ),
    'module' => 'wysiwyg_template',
  );

  // Exported permission: use text format advanced_text_editor.
  $permissions['use text format advanced_text_editor'] = array(
    'name' => 'use text format advanced_text_editor',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site developer',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format text_editor.
  $permissions['use text format text_editor'] = array(
    'name' => 'use text format text_editor',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site developer',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
