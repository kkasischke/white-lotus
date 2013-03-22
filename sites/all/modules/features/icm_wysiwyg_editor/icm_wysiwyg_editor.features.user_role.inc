<?php
/**
 * @file
 * icm_wysiwyg_editor.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function icm_wysiwyg_editor_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '4',
  );

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => '3',
  );

  // Exported role: site developer.
  $roles['site developer'] = array(
    'name' => 'site developer',
    'weight' => '5',
  );

  return $roles;
}
