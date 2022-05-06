## (CORS)-Problem



```
nano /var/lib/tomcat9/webapps/geoserver/WEB-INF/web.xml

Zeile hinzufügen 


<context-param>
  <param-name>GEOSERVER_CSRF_WHITELIST</param-name>
  <param-value>example.org</param-value>
</context-param>

```