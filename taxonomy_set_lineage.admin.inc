<?php
/**
 * @file
 * Admin forms for Taxonomy Set Lineage.
 */

/**
 * Page callback: Configure the main Taxonomy Set Lineage settings.
 */
function taxonomy_set_lineage_config_form($form, &$form_state) {
  $form['#config'] = 'taxonomy_set_lineage.settings';

  // Get a list of vocabularies as options for the form element.
  $vocabularies = array();
  foreach (taxonomy_get_vocabularies() as $vocabulary) {
    $vocabularies[$vocabulary->machine_name] = check_plain($vocabulary->name);
  }

  $form['vocabularies'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Automatically set lineage for:'),
    '#description' => t('Vocabularies selected here will have parent terms automatically selected for content assigned to a child term. Make sure any fields referencing these vocabularies allow enough cardinality to account for all levels of the hierarchy.'),
    '#options' => $vocabularies,
    '#default_value' => config_get('taxonomy_set_lineage.settings', 'vocabularies'),
  );

  return system_settings_form($form);
}
