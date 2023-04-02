#include <stdio.h> //Indique au préprocesseur d’inclure le contenu de la librairie stdio.h
#include <stdlib.h> //déclare des fonctions qui effectuent la conversion de nombres, la gestion de la mémoire et d'autres tâches.
#include <string.h> /* contient les définitions des macros, des constantes et les déclarations de fonctions et de types de chaînes de caractères, 
mais aussi pour diverses fonctions de manipulations de la mémoire.*/
#include "../lib/libgraphique.h"
#include <math.h>

void  versiontexte() { // déclaration de ma fonction

	//déclaration de mes vaiables de mois
	int jan=0, feb=0, mar=0, apr=0, may=0, jun=0, jul=0, aug=0, sep=0, oct=0, nov=0, dec=0;
	float jan_100=0, feb_100=0, mar_100=0, apr_100=0, may_100=0, jun_100=0, jul_100=0, aug_100=0, sep_100=0, oct_100=0, nov_100=0, dec_100=0;

	int c; // création de ma variable entière "c"
	char log; /* Création de ma variable log pour compter caractère par caractère*/
	char tab[29]; /* Création de mon tableau de 29 caractères (jusqu'à l'année dans le accesslog) */
	int separateur=0; /* Séparateur des premières chaînes de caractères */
	int nbline = 0; // création de ma variable entière "nbline" pour compter le nombre de connexions 
	float nbline1; // variable permettant de regrouper tous les mois ensemble

	FILE * file = fopen("/var/log/apache2/access.log", "r");/* ouverture de mon fichier que je désire en mode "r", lecture seule */

	while (! feof(file)) { /* tant que le fichier est ouvert */
		separateur=0;
		for (int i=0; i<29; i = i + 1) { // On crée la variable i qui va nous permettre de compter n'importe quel caractère dans le tableau
			tab[i] = log; // le tableau sera égal à la variable log
			fscanf(file, "%c", &log); // lire dans le fichier les caractères de log
		}
	

	while (log != '\n') // tant que log ne reviens pas à la ligne
		fscanf(file, "%c", &log); // lire dans le fichier les caractères de log
		char * p = strtok(tab, "/"); // création du pointeur p qui va décomposer la chaîne du tableau aux / entre les mois
	

	while (p != NULL) {
		if (separateur == 1) {
			if (strcmp(p, "Jan") == 0) 
				jan = jan + 1;
			
			if (strcmp(p, "Feb") == 0) 
				feb = feb + 1;
			
			if (strcmp(p, "Mar") == 0) 
				mar = mar + 1;
			
			if (strcmp(p, "Apr") == 0) 
				apr = apr + 1;
			
			if (strcmp(p, "May") == 0) 
				may = may + 1;
			
			if (strcmp(p, "Jun") == 0) 
				jun = jun + 1;
			
			if (strcmp(p, "Jul") == 0) 
				jul = jul + 1;
			
			if (strcmp(p, "Aug") == 0) 
				aug = aug + 1;
			
			if (strcmp(p, "Sep") == 0)
				sep = sep + 1;
			
			if (strcmp(p, "Oct") == 0) 
				oct = oct + 1;
			
			if (strcmp(p, "Nov") == 0) 
				nov = nov + 1;
			
			if (strcmp(p, "Dec") == 0) 
				dec = dec + 1;
			

		}

		p = strtok(NULL, "/");
		separateur = separateur + 1;
	}

	nbline = jan+feb+mar+apr+may+jun+jul+aug+sep+oct+nov+dec;
	nbline1 = nbline;
	jan_100=(jan/nbline1)*100;
	feb_100=(feb/nbline1)*100;
	mar_100=(mar/nbline1)*100;
	apr_100=(apr/nbline1)*100;
	may_100=(may/nbline1)*100;
	jun_100=(jun/nbline1)*100;
	jul_100=(jul/nbline1)*100;
	aug_100=(aug/nbline1)*100;
	sep_100=(sep/nbline1)*100;
	oct_100=(oct/nbline1)*100;
	nov_100=(nov/nbline1)*100;
	dec_100=(dec/nbline1)*100;

	}

/* Début de la boucle "tant que" permettant de compter les lignes du fichier access_log */
	while ((c = getc(file)) != EOF){ /* tant que ma variable c lis mon fichier, et que ce n'est pas égal
	à EOF, ça lis le fichier */
		  if (c == '\n')/* Incrémente le "nbline" si ce caractère est une nouvelle ligne.*/
		      nbline = nbline + 1 ;/* incrémeter 1 à "nbline" */
			}

	printf("Depuis Janvier 2018 on a enregistré %d connexions.\n", nbline); /* Afficher le nombres de connexions totales depuis le début */

	printf("Jan: %.1f%%\n", jan_100);
	printf("Feb: %.1f%%\n", feb_100);
	printf("Mar: %.1f%%\n", mar_100);
	printf("Apr: %.1f%%\n", apr_100);
	printf("May: %.1f%%\n", may_100);
	printf("Jun: %.1f%%\n", jun_100);
	printf("Jul: %.1f%%\n", jul_100);
	printf("Aug: %.1f%%\n", aug_100);
	printf("Sep: %.1f%%\n", sep_100);
	printf("Oct: %.1f%%\n", oct_100);
	printf("Nov: %.1f%%\n", nov_100);
	printf("Dec: %.1f%%\n", dec_100);

}




void versiongraphique() {
	
		//déclaration de mes vaiables de mois
	int jan=0, feb=0, mar=0, apr=0, may=0, jun=0, jul=0, aug=0, sep=0, oct=0, nov=0, dec=0, jane=0, feve=0, mare=0, apre=0, maye=0, june=0, jule=0, auge=0, sepe=0, octe=0, nove=0, dece=0;
	float jan_100=0, feb_100=0, mar_100=0, apr_100=0, may_100=0, jun_100=0, jul_100=0, aug_100=0, sep_100=0, oct_100=0, nov_100=0, dec_100=0;

	int c; // création de ma variable entière "c"
	char log; /* Création de ma variable log pour compter caractère par caractère*/
	char tab[29]; /* Création de mon tableau de 29 caractères (jusqu'à l'année dans le accesslog) */
	int separateur=0; /* Séparateur des premières chaînes de caractères */
	int nbline = 0; // création de ma variable entière "nbline" pour compter le nombre de connexions 
	float nbline1; // variable permettant de regrouper tous les mois ensemble

	FILE * file = fopen("/var/log/apache2/access.log", "r");/* ouverture de mon fichier que je désire en mode "r", lecture seule */

	while (! feof(file)) { /* tant que le fichier est ouvert */
		separateur=0;
		for (int i=0; i<29; i = i + 1) { // On crée la variable i qui va nous permettre de compter n'importe quel caractère dans le tableau
			tab[i] = log; // le tableau sera égal à la variable log
			fscanf(file, "%c", &log); // lire dans le fichier les caractères de log
		}
	

	while (log != '\n') // tant que log ne reviens pas à la ligne
		fscanf(file, "%c", &log); // lire dans le fichier les caractères de log
		char * p = strtok(tab, "/"); // création du pointeur p qui va décomposer la chaîne du tableau aux / entre les mois
	

	while (p != NULL) {
		if (separateur == 1) {
			if (strcmp(p, "Jan") == 0) 
				jan = jan + 1;
			
			if (strcmp(p, "Feb") == 0) 
				feb = feb + 1;
			
			if (strcmp(p, "Mar") == 0) 
				mar = mar + 1;
			
			if (strcmp(p, "Apr") == 0) 
				apr = apr + 1;
			
			if (strcmp(p, "May") == 0) 
				may = may + 1;
			
			if (strcmp(p, "Jun") == 0) 
				jun = jun + 1;
			
			if (strcmp(p, "Jul") == 0) 
				jul = jul + 1;
			
			if (strcmp(p, "Aug") == 0) 
				aug = aug + 1;
			
			if (strcmp(p, "Sep") == 0)
				sep = sep + 1;
			
			if (strcmp(p, "Oct") == 0) 
				oct = oct + 1;
			
			if (strcmp(p, "Nov") == 0) 
				nov = nov + 1;
			
			if (strcmp(p, "Dec") == 0) 
				dec = dec + 1;
			

		}

		p = strtok(NULL, "/");
		separateur = separateur + 1;
	}

	nbline = jan+feb+mar+apr+may+jun+jul+aug+sep+oct+nov+dec;
	nbline1 = nbline;
	jan_100=(jan/nbline1)*100;
	feb_100=(feb/nbline1)*100;
	mar_100=(mar/nbline1)*100;
	apr_100=(apr/nbline1)*100;
	may_100=(may/nbline1)*100;
	jun_100=(jun/nbline1)*100;
	jul_100=(jul/nbline1)*100;
	aug_100=(aug/nbline1)*100;
	sep_100=(sep/nbline1)*100;
	oct_100=(oct/nbline1)*100;
	nov_100=(nov/nbline1)*100;
	dec_100=(dec/nbline1)*100;

	}

/* Début de la boucle "tant que" permettant de compter les lignes du fichier access_log */
	while ((c = getc(file)) != EOF){ /* tant que ma variable c lis mon fichier, et que ce n'est pas égal
	à EOF, ça lis le fichier */
		  if (c == '\n')/* Incrémente le "nbline" si ce caractère est une nouvelle ligne.*/
		      nbline = nbline + 1 ;/* incrémeter 1 à "nbline" */
			}
	
	
	Point p = {30,50};
	ouvrir_fenetre(430,350);
	dessiner_rectangle((Point){0,0},430,350,blanc);
	char Pcompteur[50], Pjan[10], Pfev[10], Pmar[10], Pavr[10], Pmai[10], Pjun[10], Pjul[10], Paou[10], Psep[10], Poct[10], Pnov[10], Pdec[10];
	sprintf(Pcompteur,"Depuis Janvier 2018 on a %d connexions.", nbline);
	
	
	jane = floor(jan_100);
	feve = floor(feb_100);
	mare = floor(mar_100);
	apre = floor(apr_100);
	maye = floor(may_100);
	june = floor(jun_100);
	jule = floor(jul_100);
	auge = floor(aug_100);
	sepe = floor(sep_100);
	octe = floor(oct_100);
	nove = floor(nov_100);
	dece = floor(dec_100);
	
	sprintf(Pjan, "%d", jane);
	sprintf(Pfev, "%d", feve);
	sprintf(Pmar, "%d", mare);
	sprintf(Pavr, "%d", apre);
	sprintf(Pmai, "%d", maye);
	sprintf(Pjun, "%d", june);
	sprintf(Pjul, "%d", jule);
	sprintf(Paou, "%d", auge);
	sprintf(Psep, "%d", sepe);
	sprintf(Poct, "%d", octe);
	sprintf(Pnov, "%d", nove);
	sprintf(Pdec, "%d", dece);
	afficher_texte(Pcompteur,12,p,noir);  
	
	

	p.y=300;
	afficher_texte(" Jan  Fev  Mar  Avr  Mai  Juin  Juil  Aou  Sep  Oct  Nov  Dec",14,p,noir);  
  
	dessiner_rectangle((Point){30,(300-jan_100*10)},30,(jan_100*10),bleu);
	dessiner_rectangle((Point){61,(300-feb_100*10)},30,(feb_100*10),bleu);
	dessiner_rectangle((Point){92,(300-mar_100*10)},30,(mar_100*10),bleu);
	dessiner_rectangle((Point){123,(300-apr_100*10)},30,(apr_100*10),bleu);
	dessiner_rectangle((Point){154,(300-may_100*10)},30,(may_100*10),bleu);
	dessiner_rectangle((Point){185,(300-jun_100*10)},30,(jun_100*10),bleu);
	dessiner_rectangle((Point){216,(300-jul_100*10)},30,(jul_100*10),bleu);
	dessiner_rectangle((Point){247,(300-aug_100*10)},30,(aug_100*10),bleu);
	dessiner_rectangle((Point){278,(300-sep_100*10)},30,(sep_100*10),bleu);
	dessiner_rectangle((Point){309,(300-oct_100*10)},30,(oct_100*10),bleu);
	dessiner_rectangle((Point){340,(300-nov_100*10)},30,(nov_100*10),bleu);
	dessiner_rectangle((Point){371,(300-dec_100*10)},30,(dec_100*10),bleu);

	afficher_texte(Pjan,14,(Point){40,100},noir);  
	afficher_texte(Pfev,14,(Point){71,100},noir);  
	afficher_texte(Pmar,14,(Point){97,100},noir);
	afficher_texte(Pavr,14,(Point){127,100},noir);  
	afficher_texte(Pmai,14,(Point){159,100},noir);  
	afficher_texte(Pjun,14,(Point){189,100},noir);  
	afficher_texte(Pjul,14,(Point){220,100},noir);  
	afficher_texte(Paou,14,(Point){252,100},noir);  
	afficher_texte(Psep,14,(Point){282,100},noir); 
	afficher_texte(Poct,14,(Point){313,100},noir);
	afficher_texte(Pnov,14,(Point){345,100},noir); 
	afficher_texte(Pdec,14,(Point){385,100},noir); 

	actualiser();
	attendre_clic();
	fermer_fenetre();
}



void lecture_style()
{
  /* On aurait pu utiliser un fichier css mais il est     */
  /* parfois plus pratique de définir le style dans le    */
  /* code HTML généré par ce CGI-BIN.                     */
  /* On le lit ce style depuis fichier "aecrire.html"     */
  /* puis on l'affiche.                                   */
  /* L'étudiant attentif pourra s'apercevoir aisément que */
  /* cette fonction n'est pas inutile pour ses propres    */
  /* besoins...                                           */

  FILE *fd;
  char str[1024];
  if ((fd = fopen("aecrire.html","r")) == NULL)
    fprintf(stderr,"ERREUR DE CHARGEMENT DE FICHIER\n");
  else {
    while (!feof(fd)){
      fgets(str,1024,fd);
      printf("%s",str);

    }
    fclose(fd);
  }
}

void versionweb()
{
			//déclaration de mes vaiables de mois
	int jan=0, feb=0, mar=0, apr=0, may=0, jun=0, jul=0, aug=0, sep=0, oct=0, nov=0, dec=0, jane=0, feve=0, mare=0, apre=0, maye=0, june=0, jule=0, auge=0, sepe=0, octe=0, nove=0, dece=0;
	int jane1=0, feve1=0, mare1=0, apre1=0, maye1=0, june1=0, jule1=0, auge1=0, sepe1=0, octe1=0, nove1=0, dece1=0;
	float jan_100=0, feb_100=0, mar_100=0, apr_100=0, may_100=0, jun_100=0, jul_100=0, aug_100=0, sep_100=0, oct_100=0, nov_100=0, dec_100=0;

	int c; // création de ma variable entière "c"
	char log; /* Création de ma variable log pour compter caractère par caractère*/
	char tab[29]; /* Création de mon tableau de 29 caractères (jusqu'à l'année dans le accesslog) */
	int separateur=0; /* Séparateur des premières chaînes de caractères */
	int nbline = 0; // création de ma variable entière "nbline" pour compter le nombre de connexions 
	float nbline1; // variable permettant de regrouper tous les mois ensemble

	FILE * file = fopen("/var/log/apache2/access.log", "r");/* ouverture de mon fichier que je désire en mode "r", lecture seule */

	while (! feof(file)) { /* tant que le fichier est ouvert */
		separateur=0;
		for (int i=0; i<29; i = i + 1) { // On crée la variable i qui va nous permettre de compter n'importe quel caractère dans le tableau
			tab[i] = log; // le tableau sera égal à la variable log
			fscanf(file, "%c", &log); // lire dans le fichier les caractères de log
		}
	

	while (log != '\n') // tant que log ne reviens pas à la ligne
		fscanf(file, "%c", &log); // lire dans le fichier les caractères de log
		char * p = strtok(tab, "/"); // création du pointeur p qui va décomposer la chaîne du tableau aux / entre les mois
	

	while (p != NULL) {
		if (separateur == 1) {
			if (strcmp(p, "Jan") == 0) 
				jan = jan + 1;
			
			if (strcmp(p, "Feb") == 0) 
				feb = feb + 1;
			
			if (strcmp(p, "Mar") == 0) 
				mar = mar + 1;
			
			if (strcmp(p, "Apr") == 0) 
				apr = apr + 1;
			
			if (strcmp(p, "May") == 0) 
				may = may + 1;
			
			if (strcmp(p, "Jun") == 0) 
				jun = jun + 1;
			
			if (strcmp(p, "Jul") == 0) 
				jul = jul + 1;
			
			if (strcmp(p, "Aug") == 0) 
				aug = aug + 1;
			
			if (strcmp(p, "Sep") == 0)
				sep = sep + 1;
			
			if (strcmp(p, "Oct") == 0) 
				oct = oct + 1;
			
			if (strcmp(p, "Nov") == 0) 
				nov = nov + 1;
			
			if (strcmp(p, "Dec") == 0) 
				dec = dec + 1;
			

		}

		p = strtok(NULL, "/");
		separateur = separateur + 1;
	}

	nbline = jan+feb+mar+apr+may+jun+jul+aug+sep+oct+nov+dec;
	nbline1 = nbline;
	jan_100=(jan/nbline1)*100;
	feb_100=(feb/nbline1)*100;
	mar_100=(mar/nbline1)*100;
	apr_100=(apr/nbline1)*100;
	may_100=(may/nbline1)*100;
	jun_100=(jun/nbline1)*100;
	jul_100=(jul/nbline1)*100;
	aug_100=(aug/nbline1)*100;
	sep_100=(sep/nbline1)*100;
	oct_100=(oct/nbline1)*100;
	nov_100=(nov/nbline1)*100;
	dec_100=(dec/nbline1)*100;

	}

/* Début de la boucle "tant que" permettant de compter les lignes du fichier access_log */
	while ((c = getc(file)) != EOF){ /* tant que ma variable c lis mon fichier, et que ce n'est pas égal
	à EOF, ça lis le fichier */
		  if (c == '\n')/* Incrémente le "nbline" si ce caractère est une nouvelle ligne.*/
		      nbline = nbline + 1 ;/* incrémeter 1 à "nbline" */
			}
	
	jane = 10*floor(jan_100);
	feve = 10*floor(feb_100);
	mare = 10*floor(mar_100);
	apre = 10*floor(apr_100);
	maye = 10*floor(may_100);
	june = 10*floor(jun_100);
	jule = 10*floor(jul_100);
	auge = 10*floor(aug_100);
	sepe = 10*floor(sep_100);
	octe = 10*floor(oct_100);
	nove = 10*floor(nov_100);
	dece = 10*floor(dec_100);
	
	jane1 = floor(jan_100);
	feve1 = floor(feb_100);
	mare1 = floor(mar_100);
	apre1 = floor(apr_100);
	maye1 = floor(may_100);
	june1 = floor(jun_100);
	jule1 = floor(jul_100);
	auge1 = floor(aug_100);
	sepe1 = floor(sep_100);
	octe1 = floor(oct_100);
	nove1 = floor(nov_100);
	dece1 = floor(dec_100);
  printf("Content-type: text/html\n\n"); 

  printf("<!doctype html>\n");
  printf("<html lang=\"fr\">\n"); 
  printf("<body>\n");

  lecture_style();
  
/* 
 * Notez que pour le web que les caractères accentués ont
 * été transformés en effet les chaînes de caractères C sont nativement
 * codées en ASCII et non en UTF-8. 
 * L'étudiant désireux de bien faire devrait normalement prétraiter 
 * tous les accents avant de les afficher en HTML.
 */
  printf("Depuis Janvier 2018 on a enregistr&eacute; %d connexions.<br>\n", nbline);
  
  printf("<div id = \"vertgraph\">\n");
  printf("    <ul>\n");
/* 
 * remarquez que chaque barre de l'histogramme est placée tous les 31 pixels,
 * et que le label correspond ici à la hauteur/10, on n'affiche pas le label pour des
 * hauteurs < 25 sinon ça fausse l'affichage.
 */
  printf("        <li style=\"left: 10px;  height: %dpx;\">%d</li>\n",jane,jane1);
  printf("        <li style=\"left: 41px;  height: %dpx;\">%d</li>\n",feve,feve1);
  printf("        <li style=\"left: 72px;  height: %dpx;\">%d</li>\n",mare,mare1);
  printf("        <li style=\"left: 103px; height: %dpx;\">%d</li>\n",apre,apre1);
  printf("        <li style=\"left: 134px; height: %dpx;\">%d</li>\n",maye,maye1);
  printf("        <li style=\"left: 165px; height: %dpx;\">%d</li>\n",june,june1);
  printf("        <li style=\"left: 196px; height: %dpx;\">%d</li>\n",jule,jule1);
  printf("        <li style=\"left: 227px; height: %dpx;\">%d</li> \n",auge,auge1);
  printf("        <li style=\"left: 258px; height: %dpx;\">%d</li> \n",sepe,sepe1);
  printf("        <li style=\"left: 289px; height: %dpx;\">%d</li> \n",octe,octe1);
  printf("        <li style=\"left: 320px; height: %dpx;\">%d</li>\n",nove,nove1);
  printf("        <li style=\"left: 351px; height: %dpx;\">%d</li> \n",dece,dece1);
  printf("    </ul>\n");
  printf("</div>\n");
  
  printf("</html>\n");
  printf("</body>\n\n"); 

}


/* On va avoir une boucle while car tant que y'a des lignes dans le dossier on défini une variable 
 j =  0 et dans la boucle for on initialise une variable i = 0 et tant que i<= */

int main(int argc, char* argv[])
{
    if (argc > 1) {
      if (strcmp(argv[1],"-txt")==0) {
        versiontexte();
      }
      if (strcmp(argv[1],"-gr")==0) {
        versiongraphique();
      }
      
    } else {
      versionweb();
    }

    return EXIT_SUCCESS;
}

