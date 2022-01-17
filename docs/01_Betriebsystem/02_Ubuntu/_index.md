## Allgemein Installieren


## Spracheinstellung

``` 
sudo apt install locales
locale -a
sudo locale-gen de_DE.UTF-8
sudo dpkg-reconfigure locales

sudo nano /etc/locale.gen

----

de_DE.UTF-8 UTF-8

----

sudo nano /etc/default/locale

--------

LANG=de_DE.UTF-8
LANGUAGE=de_DE.UTF-8
LC_MESSAGES=de_DE.UTF-8


---------
sudo nano /etc/environment

----
LC_ALL=de_DE.UTF-8
LANG=de_DE.UTF-8

---- 
sudo update-locale
sudo locale-gen

```




```
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install git-core
apt-get install  gnupg
```

## C und C++ Installieren

```

sudo apt-get install cmake gcc clang gdb build-essential git-core

```


## Mysql
```
wget -c https://dev.mysql.com/get/mysql-apt-config_0.8.16-1_all.deb
sudo dpkg -i mysql-apt-config*
sudo apt update
sudo apt-get install mysql-server
```




## Python

```
sudo apt install python3 python3-dev git curl python-is-python3  python3-pip 



```

## Java

```

sudo apt-get install openjdk-17-jre  openjdk-17-jdk -y
apt-get install tomcat9

```
## Node

* [nodejs Insdtallieren](https://github.com/nodesource/distributions/blob/master/README.md)


# Supervisor
## Installieren
```
sudo apt-get install supervisor

```

## Beispiel Code

```
[program:python] ;Programm Name
directory=/Server/flask ;Pfad vor der Ausführung wechseln
command=/usr/bin/gunicorn app:app -b localhost:6000 ;Der Pfad des überwachten Prozesses
numprocs = 1; Prozess starten
autostart=true ; Beginnen Sie mit dem Start von Supervisord
autorestart=true ;  automatischer Neustart
startretries = 10; Die maximale Anzahl von Wiederholungsversuchen, wenn der Start fehlschlägt
Exitcodes = 0; normale Exitcodes
Stoppsignal = KILL; Das Signal, mit dem der Prozess abgebrochen wird
stopwaitsecs = 10; Wartezeit vor dem Senden von SIGKILL
```

## Erstellen Supervisor

```

nano etc/supervisor/conf.d/python.conf

```

## Starten Supervisor

* sudo supervisorctl reread
* sudo service supervisor restart

# systemctl
## Allgemeine Aufbau Datei

```
[Unit]
# Abschnitt wird im Artikel systemd/Units beschrieben

[Service]
Type=simple
ExecStart=/PFAD/ZUM/BEFEHL/befehl

[Install]
WantedBy=multi-user.target

```
## Optionen für die [Service]-Sektion

* ExecStart    - 	der Befehl, der beim Start der Unit ausgeführt wird
* ExecStartPre - 	der Befehl, der vor dem Start der Unit (also vor der Ausführung von ExecStart) ausgeführt werden soll
* ExecStartPost - 	der Befehl, der nach dem Start der Unit (also nach der Ausführung von ExecStart) ausgeführt werden soll
* WorkingDirectory - 	legt das Arbeitsverzeichnis fest, in dem die Prozesse ausgeführt werden. Das Verzeichnis muss als absoluter Pfad angegeben werden oder als ~. Bei letzterem wird das Homeverzeichnis des im Schlüssel User angegebenen Nutzers gewählt.
* User -	legt fest, unter welchem Benutzer der Service laufen soll (Standard: root)
* Group -	legt fest, unter welcher Gruppe der Service laufen soll

## Beispiel

```

[Unit]
Description=ahrensburg.digital

[Service]
WorkingDirectory=/Server/ahrensburg.digital
ExecStart=/Server/ahrensburg.digital/ahrensburg.digital
Restart=always
# ahrensburg-dital
RestartSec=10
KillSignal=SIGINT
SyslogIdentifier=ahrensburg.digital
User=root

[Install]
WantedBy=multi-user.target


```
## Dienst Einstellung

* sudo cp -u ahrensburg.service /etc/systemd/system/ahrensburg.service
* nano /etc/systemd/system/ahrensburg.service

## Server Dienst Aktivieren
```
sudo  systemctl enable ahrensburg.service


```


