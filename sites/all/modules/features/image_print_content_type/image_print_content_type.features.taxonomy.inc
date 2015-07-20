<?php
/**
 * @file
 * image_print_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function image_print_content_type_taxonomy_default_vocabularies() {
  return array(
    'image_project_tags' => array(
      'name' => 'Image Project Tags',
      'machine_name' => 'image_project_tags',
      'description' => 'Add tags to each image print to associate them with a project.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
