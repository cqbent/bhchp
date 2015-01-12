/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

    // Place your code here.
    // get window height, set min-height of main div: height - header height - footer height
    $(document).ready(function() {
        var h_height = $('#header').height();
        var f_height = $('#footer').height();
        var n_height = $('#navigation').height();
        var main_min_height = $(window).height() - h_height - f_height - n_height - 40;
        $('#main').css('min-height', main_min_height+'px');
        console.log('h_height: '+h_height+', f_height: '+f_height+', n_height: '+n_height);
    })
      

  }
};


})(jQuery, Drupal, this, this.document);
