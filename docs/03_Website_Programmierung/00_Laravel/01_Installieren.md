## Website erstellen

### Laravel 8
```
composer global require laravel/installer
Laravel new laravel
cd laravel

```

### Sqlite3 Datenbank erstellen

```
sqlite3 laravel.db
$ console .databases
$ console .quit

```
### .env Datei ändern

```

DB_CONNECTION=sqlite
DB_DATABASE=d:\laravel\laravel.db
DB_FOREIGN_KEYS=true


```
### Weiter Installiere

```
composer require laravel/jetstream
php artisan jetstream:install livewire
npm install
npm run dev
php artisan migrate
```





### Laravel 7

### Laravel 6