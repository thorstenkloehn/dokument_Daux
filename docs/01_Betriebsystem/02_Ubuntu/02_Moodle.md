## Moodle
### Moodle Installieren
```
sudo rm -R /var/www/html
git clone git://git.moodle.org/moodle.git /var/www/html
cd /var/www/html
git branch -a
git branch --track moodle39 origin/MOODLE_39_STABLE
git checkout moodle39

chmod -R 777 /var/www

```