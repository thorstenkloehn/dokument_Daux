## Wordpress
### Wp Installieren
* [Wp-Cli](https://wp-cli.org/)
#### Wordpress hinunterladen
```
wp core download --path=/Wordpress --locale=de_DE --allow-root
```
#### Erstellen Sie eine neue wp-config.php-Datei mit wp config create
```
cd /Wordpress
wp config create --dbname=Wordpress --dbuser=root --dbpass=db_Password --locale=de_DE --dbcharset=utf8 --allow-root
```
#### Erstellen Sie die Datenbank basierend auf wp-config.php mit wp db create

```
wp db create --allow-root
```
