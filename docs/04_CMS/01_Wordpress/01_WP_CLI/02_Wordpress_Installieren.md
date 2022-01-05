## Wordpress hinunterladen

```

wp core download --locale=de_DE

```
* [doc](https://developer.wordpress.org/cli/commands/core/download/)

## Wordpress Einstellung

```

wp config create --dbname=wordpress --dbuser=root --dbpass=Test --locale=de_DE 

```
* [doc](https://developer.wordpress.org/cli/commands/config/create/)
## Wordpress Datenbank erstellen
```
wp db create
```
* [doc]()
## Wordpress Installieren

```
wp core install --url=localhost --title=Test --admin_user=Test --admin_password=Test --admin_email=info@localhost
```

## Debug anschalten 
```
wp config set --raw WP_DEBUG true
```

## Wordpress Core Update

```
wp core update
wp language core update
```
## Memory Limit auf 512MB hochsetzen

```
wp config set WP_MEMORY_LIMIT 512M
```
## Cache löschen

```
wp cache flush

```

## Weblink 

* [Doc](https://make.wordpress.org/cli/handbook/guides/quick-start/)
* [Doc1](https://gist.github.com/Nerdies24/af0d556500ac1a27d9e91ae9f350bc67)