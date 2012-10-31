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

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => 'applications_showcase',
    'image_link' => '',
  );
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
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Applications Showcase';
  $export['applications_showcase'] = $view;

  $view = new view();
  $view->name = 'community_applications';
  $view->description = 'Displays all applications in a gallery view.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Community Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications Showcase';
  $handler->display->display_options['css_class'] = 'applications-showcase';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'There is nothing in this view';
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
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
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Field: Groups audience (group_audience:gid) */
  $handler->display->display_options['arguments']['group_audience_gid']['id'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['table'] = 'field_data_group_audience';
  $handler->display->display_options['arguments']['group_audience_gid']['field'] = 'group_audience_gid';
  $handler->display->display_options['arguments']['group_audience_gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['group_audience_gid']['default_argument_type'] = 'og_context';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['group_audience_gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['group_audience_gid']['summary_options']['items_per_page'] = '25';
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
    'data' => 'data',
  );
  /* Filter criterion: Content: Application Type (field_application_type) */
  $handler->display->display_options['filters']['field_application_type_tid']['id'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['table'] = 'field_data_field_application_type';
  $handler->display->display_options['filters']['field_application_type_tid']['field'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['operator_id'] = 'field_application_type_tid_op';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['label'] = 'Application Type (field_application_type)';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['operator'] = 'field_application_type_tid_op';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['identifier'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_application_type_tid']['vocabulary'] = 'application_types';

  /* Display: Mobile Applications Pane */
  $handler = $view->new_display('panel_pane', 'Mobile Applications Pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Application Type (field_application_type) */
  $handler->display->display_options['filters']['field_application_type_tid']['id'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['table'] = 'field_data_field_application_type';
  $handler->display->display_options['filters']['field_application_type_tid']['field'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['value'] = array(
    0 => '24443',
  );
  $handler->display->display_options['filters']['field_application_type_tid']['vocabulary'] = 'application_types';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Web Applications Pane */
  $handler = $view->new_display('panel_pane', 'Web Applications Pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application URL */
  $handler->display->display_options['fields']['field_application_url']['id'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['table'] = 'field_data_field_application_url';
  $handler->display->display_options['fields']['field_application_url']['field'] = 'field_application_url';
  $handler->display->display_options['fields']['field_application_url']['label'] = '';
  $handler->display->display_options['fields']['field_application_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_application_url']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Application Image */
  $handler->display->display_options['fields']['field_application_image']['id'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['table'] = 'field_data_field_application_image';
  $handler->display->display_options['fields']['field_application_image']['field'] = 'field_application_image';
  $handler->display->display_options['fields']['field_application_image']['label'] = '';
  $handler->display->display_options['fields']['field_application_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_application_image']['alter']['path'] = '[field_application_url]';
  $handler->display->display_options['fields']['field_application_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_application_image']['element_class'] = 'float-left';
  $handler->display->display_options['fields']['field_application_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_application_image']['settings'] = array(
    'image_style' => 'applications_showcase',
    'image_link' => '',
  );
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
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '24439',
  );
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'application_types';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'group_audience_gid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field: Groups audience (group_audience:gid)',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'data' => 'data',
  );
  /* Filter criterion: Content: Application Type (field_application_type) */
  $handler->display->display_options['filters']['field_application_type_tid']['id'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['table'] = 'field_data_field_application_type';
  $handler->display->display_options['filters']['field_application_type_tid']['field'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['operator_id'] = 'field_application_type_tid_op';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['label'] = 'Application Type';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['operator'] = 'field_application_type_tid_op';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['identifier'] = 'field_application_type_tid';
  $handler->display->display_options['filters']['field_application_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  $handler->display->display_options['filters']['field_application_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_application_type_tid']['vocabulary'] = 'application_types';
  $handler->display->display_options['path'] = 'applications';
  $export['community_applications'] = $view;

  return $export;
}
