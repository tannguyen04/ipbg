<div class="site-wide">
  <?php if(!empty($content['header_top'])): ?>
    <div id="header-top" class="container">
      <?php print $content['header_top']; ?>
    </div>
  <?php endif; ?>


  <div id="header">
    <div class="row">
      <?php if(!empty($content['navigation'])): ?>
        <div id="navigation" class="container">
          <?php print $content['navigation']; ?>
        </div>
      <?php endif; ?>

      <?php if(!empty($content['navigation_bottom'])): ?>
        <div id="navigation-bottom" class="container">
          <?php print $content['navigation_bottom']; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>

  <div id="page-title">
    <?php if(!empty($content['page_title'])): ?>
      <div class="container">
        <?php print $content['page_title']; ?>
      </div>
    <?php endif; ?>
  </div>

  <div id="main-content">
    <div class="container">
      <?php if(!empty($content['content_top'])): ?>
        <div id="content-top">
          <?php print $content['content_top']; ?>
        </div>
      <?php endif; ?>

      <?php if(!empty($content['content'])): ?>
        <div id="content">
          <?php print $content['content']; ?>
        </div>
      <?php endif; ?>
      <?php if(!empty($content['content_bottom'])): ?>
        <div id="content-bottom">
          <?php print $content['content_bottom']; ?>
        </div>
      <?php endif; ?>
    </div>
  </div>

  <div id="footer">
    <div class="container">
      <div class="footer-panel row">
        <div id="footer-panel-1" class="col-md-5">
          <?php print $content['footer_panel_1']; ?>
        </div>
        <div id="footer-panel-2" class="col-md-2">
          <?php print $content['footer_panel_2']; ?>
        </div>
        <div id="footer-panel-3" class="col-md-2">
          <?php print $content['footer_panel_3']; ?>
        </div>
        <div id="footer-panel-4" class="col-md-3">
          <?php print $content['footer_panel_4']; ?>
        </div>
      </div>

      <?php if(!empty($content['footer_top'])): ?>
        <div id="footer-top" class="container">
          <?php print $content['footer_top']; ?>
        </div>
      <?php endif; ?>

      <?php print $content['footer']; ?>
    </div>
  </div>

</div>
