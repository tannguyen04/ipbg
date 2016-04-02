<div>
  <?php if(!empty($content['header_top'])): ?>
    <div id="header-top" class="container">
    <?php print $content['header_top']; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($content['header'])): ?>
    <div id="header" class="container">
    <div class="row">
      <?php print $content['header']; ?>
    </div>
    </div>
  <?php endif; ?>

  <?php if(!empty($content['navigation'])): ?>
    <div id="navigation" class="container">
    <?php print $content['navigation']; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($content['feature'])): ?>
    <div id="feature" class="container">
    <?php print $content['feature']; ?>
    </div>
  <?php endif; ?>

  <?php if(!empty($content['breadcrumb'])): ?>
    <div id="breadcrumb" class="container">
    <?php print $content['breadcrumb']; ?>
    </div>
  <?php endif; ?>

  <div id="main-content">
    <?php if(!empty($content['content_top'])): ?>
      <div id=content-top class="container">
        <?php print $content['content_top']; ?>
      </div>
    <?php endif; ?>

    <?php if(!empty($content['content'])): ?>
      <div id="content" class="container">
        <?php print $content['content']; ?>
      </div>
    <?php endif; ?>

    <?php if(!empty($content['content_bottom'])): ?>
      <div id="content-bottom" class="container">
        <?php print $content['content_bottom']; ?>
      </div>
    <?php endif; ?>
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
