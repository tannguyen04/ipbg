<div class="anchor-link-product">
  <h3><?php print $title; ?></h3>
  <?php if(!empty($items)): ?>
    <ul>
      <?php foreach($items as $item): ?>
        <li><?php print $item; ?></li>
      <?php endforeach; ?>
    </ul>
  <?php endif; ?>
</div>
