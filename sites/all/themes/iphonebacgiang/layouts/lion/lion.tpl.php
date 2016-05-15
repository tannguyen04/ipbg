<?php
  //Template lion
?>
<div class="layout-lion row">
  <?php if(!empty($content['top_content'])): ?>
    <div class="region-top-content">
      <div class="container">
        <?php print $content['top_content']; ?>
      </div>
    </div>
  <?php endif; ?>
  <?php if(!empty($content['middle_content'])): ?>
    <div class="region-middle-content">
      <?php print $content['middle_content']; ?>
    </div>
  <?php endif; ?>
  <?php if(!empty($content['bottom_content'])): ?>
    <div class="region-bottom-content">
      <?php print $content['bottom_content']; ?>
    </div>
  <?php endif; ?>
</div>
