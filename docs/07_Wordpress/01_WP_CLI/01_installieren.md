## Installieren Ubuntu

```
composer global require wp-cli/wp-cli-bundle

```

## Installieren bei Windows 11

### Wp-cli
```
e:
mkdir wp_cli
cd wp_cli
curl -O https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar

```

### wp.bat

```

@ECHO OFF
php "e:\wp_cli\wp-cli.phar" %*

```