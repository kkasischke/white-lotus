/*
Copyright (c) 2003-2011, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/
CKEDITOR.editorConfig = function( config )
{
  // config.styleSet is an array of objects that define each style available
  // in the font styles tool in the ckeditor toolbar
  config.stylesSet =
  [
        /* Block Styles */

        // Each style is an object whose properties define how it is displayed
        // in the dropdown, as well as what it outputs as html into the editor
        // text area.
        { name : 'Paragraph'   , element : 'p' },
        { name : 'Title'   , element : 'h2', attributes : { 'class' : 'node-title' } },
        { name : 'Subtitle'   , element : 'h3', attributes : { 'class' : 'node-subtitle' } },
        { name : 'Section'   , element : 'h4', attributes : { 'class' : 'node-section' } },
        { name : 'Sub-Section'   , element : 'h5', attributes : { 'class' : 'node-subsection' } },
        { name : 'Image Left', element : 'div', attributes : { 'style' : 'float:left;', 'class' : 'img-left' } },
        { name : 'Image Right', element : 'div', attributes : { 'style' : 'float:right;', 'class' : 'img-right' } },
        { name : 'Image Center', element : 'div', attributes : { 'style' : 'text-align:center;', 'class' : 'img-center' } },
        { name : 'Preformatted Text', element : 'pre' },
        { name : 'Container', element : 'div.clearfix' }
  ];

}