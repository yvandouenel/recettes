<?php
/**
 * @file
 * featurearticlesrecipes.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function featurearticlesrecipes_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'full';
  $context_config->transcoder = array(
    'audio' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
    'gallery' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'audio' => array(
      '*' => 'default',
    ),
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
    'gallery' => array(
      '*' => 'galleria',
      'settings' => array(
        'width' => '100%',
        'height' => '450',
        'thumb_style' => 'thumbnail',
        'normal_style' => 'large',
        'big_style' => 'original',
        'theme' => 'classic',
        'options' => '{"": ""} ',
      ),
    ),
  );
  $export['full'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'list';
  $context_config->transcoder = array(
    'audio' => array(
      '*' => 'passthrough',
    ),
    'gallery' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'style-thumbnail',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'audio' => array(
      '*' => 'default',
    ),
    'gallery' => array(
      '*' => 'default',
    ),
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $export['list'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'small';
  $context_config->transcoder = array(
    'audio' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'style-thumbnail',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
    'gallery' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'audio' => array(
      '*' => 'default',
    ),
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
    'gallery' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['small'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'title';
  $context_config->transcoder = array(
    'audio' => array(
      '*' => 'passthrough',
    ),
    'image' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
    'gallery' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'audio' => array(
      '*' => 'default',
    ),
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
    'gallery' => array(
      '*' => 'default',
      'settings' => array(),
    ),
  );
  $export['title'] = $context_config;

  return $export;
}
