## index.php

```
<!DOCTYPE html>
<html <?php language_attributes(); ?>>
<head>

    <meta charset="<?php bloginfo( 'charset' ); ?>">
    <meta name="viewport" content="width=device-width, initial-scale=1.0" >
    <title><?php bloginfo('name'); ?></title>
    <link rel="stylesheet" href="<?php  bloginfo('template_url')?>/css/bootstrap.min.css">

    <?php wp_head(); ?>

</head>

<body <?php body_class(); ?>>

<?php
wp_body_open(); ?>

<?php wp_footer(); ?>
	</body>
</html>
```