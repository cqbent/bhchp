<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

<link href="/sites/all/libraries/timeline/css/card.css" rel="stylesheet" type="text/css" />
<script type="text/javascript" src="/sites/all/libraries/timeline/js/jquery.mCustomScrollbar.js"></script>
<script type="text/javascript" src="/sites/all/libraries/timeline/js/jquery.easing.1.3.js"></script>
<script type="text/javascript" src="/sites/all/libraries/timeline/js/jquery.timeline.js"></script>
<script type="text/javascript" src="/sites/all/libraries/timeline/js/lightbox.js"></script>

<script type="text/javascript">
jQuery(window).load(function() {
    jQuery('.timelineCard').timeline({
        openTriggerClass : '.read_more',
        categories : ['1984-1989','1990-1999','2000-2009','2010 +'],
        nuberOfSegments : [10,10,10,10],
        startItem : '1986/1984-1989',
        yearsOn : false,
        segmentOffset : 3
    });
});	
</script>
  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>

</article>
