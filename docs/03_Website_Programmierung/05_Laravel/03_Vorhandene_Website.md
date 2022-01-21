## Vorhanden Website Erstellen
### Beispiel

```

mysql -u root -pTest
create database laravel

git clone https://github.com/thorstenkloehn/Laravel.git
cd Laravel
composer install
composer require laravel/breeze --dev
php artisan breeze:install
npm install
npm run dev
php artisan migrate
php artisan key:generate

```