install:
	sudo apt-get install php -y
	sudo apt-get install composer -y
	sudo composer global require daux/daux.io
build:
	sudo /root/.composer/vendor/bin/daux serve