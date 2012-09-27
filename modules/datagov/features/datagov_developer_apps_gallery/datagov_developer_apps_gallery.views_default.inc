<?php
/**
 * @file
 * datagov_developer_apps_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function datagov_developer_apps_gallery_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'applications_showcase';
  $view->description = 'Displays all applications in a gallery view.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Applications Showcase';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications Showcase';
  $handler->display->display_options['css_class'] = 'applications-showcase';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_application_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_application_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_application_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_application_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_application_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_application_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_application_url']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_application_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_application_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_application_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_application_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_application_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_application_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => 'applications_showcase',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_application_image']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="application-image">[field_application_image]</div>
<div class="application-description">
<h4>[title]</h4>
<p>[body]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'applications' => 'applications',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Applications Showcase';
  $export['applications_showcase'] = $view;

  return $export;
}
