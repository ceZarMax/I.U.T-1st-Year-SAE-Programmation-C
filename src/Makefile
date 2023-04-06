CC = gcc
EXEC = versiondynamique
LIB = -lm -lSDL -lSDL_ttf
LIBS= ../lib/libgraphique.c -lm -lSDL -lSDL_ttf    -L/usr/lib -lm -lglib-2.0
EXEC= versiondynamique
CGIDIR = /usr/lib/cgi-bin/
LOGDIR = /var/log/apache2/
WWWDIR = /var/www/
HTMLDIR= $(WWWDIR)/html/

%.o: %.c
	$(CC) $(FLAGS)-c $< 

all: $(EXEC)


versiondynamique: versiondynamique.o
	$(CC) $(LIBS) $(FLAGS) -o $@ $^

install: install-html install-cgi
	@sudo chmod a+rx $(LOGDIR) 
	@sudo chmod a+r $(LOGDIR)/access.log 

install-cgi:
	@cd ../www/codescompiles/ ; \
	sudo cp aecrire.html versiondynamique-txt \
		$(CGIDIR) ;\
	cd ../..
	@echo "Installation du programme :"
	sudo cp ../www/codescompiles/versiondynamique $(CGIDIR)

install-html:
	@echo "Copie des fichiers aux bons emplacements" 
	@sudo tar xf ../www/www.tar -C /

clean: 
	@sudo rm -rf /var/www/*
	@sudo mkdir $(HTMLDIR)
	@sudo cp ../www/index.html $(HTMLDIR)
	@sudo rm -f $(CGIDIR)/*
