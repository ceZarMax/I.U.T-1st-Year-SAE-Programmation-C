CC = gcc
CGIDIR = /usr/lib/cgi-bin/
LOGDIR = /var/log/apache2/
WWWDIR = /var/www/
HTMLDIR= $(WWWDIR)/html/

all: clean install

install: install-html install-cgi
	@sudo chmod a+rx $(LOGDIR) 
	@sudo chmod a+r $(LOGDIR)/access.log 

install-cgi:
	@cd www/codescompiles/ ; \
	sudo cp aecrire.html versiondynamique-txt versionstatique \
	     $(CGIDIR) ;\
	cd ../..
	@echo "Installation du programme :"
	sudo cp www/codescompiles/versiondynamique $(CGIDIR)

install-html:
	@echo "Copie des fichiers aux bons emplacements" 
	@sudo tar xf www/www.tar -C /

clean: 
	@sudo rm -rf /var/www/*
	@sudo mkdir $(HTMLDIR)
	@sudo cp www/index.html $(HTMLDIR)
	@sudo rm -f $(CGIDIR)/*


