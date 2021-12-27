
## Mysql Installieren

* [Download](https://dev.mysql.com/downloads/)


```
e:
cd mysql-8.0.27-winx64/mysql-8.0.27-winx64/bin
mysqld --initialize-insecure
mysqld --console

Neu Console Starten

e:
cd mysql-8.0.27-winx64/mysql-8.0.27-winx64/bin
mysql -u root --skip-password

$ Mysql ändern

* ALTER USER 'root'@'localhost' IDENTIFIED BY 'Test';
* exit;

CMD Admin Rechte Starten
e:
cd mysql-8.0.27-winx64/mysql-8.0.27-winx64/bin
mysqld --install

Umgebungvariable 
mysql e:\mysql-8.0.27-winx64/mysql-8.0.27-winx64/bin
```