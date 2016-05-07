<?php
  //Template lion
?>
<div class="spectre">
  <?php if(!empty($content['top_content'])): ?>
    <div class="region-top-content">
      <?php print $content['top_content']; ?>
    </div>
  <?php endif; ?>
  <div class="container">
    <div class="row">
      <?php if(!empty($content['middle_content'])): ?>
        <div class="region-middle-content col-xs-12 col-sm-8">
          <?php print $content['middle_content']; ?>
        </div>
      <?php endif; ?>
      <?php if(!empty($content['sidebar_content'])): ?>
        <div class="region-sidebar-content col-xs-12 col-sm-4">
          <?php print $content['sidebar_content']; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>
</div>
