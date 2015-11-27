/*************************************************************************
Hachage  -  fichier main
-------------------
début                : 24/11/2015 16:23:40
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* mettez ici vos déclarations de fonctions et types */

typedef struct Cellule
{
	int statue;
	char* cle;
	char* valeur;
}Cellule;

typedef struct TableHachage
{
	Cellule* cellules;
	int celluleRemplie;
	int celluleSupprime;
	int celluleVide;
	int taillePhysique;
	int tailleOccupe;
}TableHachage;

TableHachage * Initialisation(int n);

void Liberation(TableHachage * t);

int DonnePosition(char* clef);

void error(void);

int main(void)
{
	int size;
	char lecture[100];
	char * key;
	char * val;

	if (fscanf(stdin, "%99s", lecture) != 1)
		error();
	while (strcmp(lecture, "bye") != 0)
	{
		if (strcmp(lecture, "init") == 0)
		{
			if (fscanf(stdin, "%99s", lecture) != 1)
				error();
			size = atoi(lecture);
			/* mettre le code d'initialisation ici */
		}
		else if (strcmp(lecture, "insert") == 0)
		{
			if (fscanf(stdin, "%99s", lecture) != 1)
				error();
			key = strdup(lecture);
			if (fscanf(stdin, "%99s", lecture) != 1)
				error();
			val = strdup(lecture);
			/* mettre ici le code d'insertion */
		}
		else if (strcmp(lecture, "delete") == 0)
		{
			if (fscanf(stdin, "%99s", lecture) != 1)
				error();
			key = strdup(lecture);
			/* mettre ici le code de suppression */
		}
		else if (strcmp(lecture, "query") == 0)
		{
			if (fscanf(stdin, "%99s", lecture) != 1)
				error();
			/* mettre ici le code de recherche et traitement/affichage du résultat */
		}
		else if (strcmp(lecture, "destroy") == 0)
		{
			/* mettre ici le code de destruction */
		}
		else if (strcmp(lecture, "stats") == 0)
		{
			/* mettre ici le code de statistiques */
		}

		if (fscanf(stdin, "%99s", lecture) != 1)
			error();
	}
	return 0;
}

/* placer ici vos définitions (implémentations) de fonctions ou procédures */

void error(void)
{
	printf("input error\r\n");
	exit(0);
}


TableHachage* Initialisation(int n)
{
	TableHachage* t;
	t = (TableHachage*)malloc(sizeof(TableHachage));
	if (t = NULL)
	{
		perror("Impossible d'initialiser la table");
		exit(-1);
	}

	t->taillePhysique = 10;
	t->celluleVide = t->taillePhysique;
	t->tailleOccupe = 0;
	t->celluleSupprime = 0;

	t->cellules = (Cellule*)malloc(t->taillePhysique*sizeof(Cellule));
	return t;
}

void Liberation(TableHachage* t)
{
	free(t->cellules);
	free(t);
}

int DonnePosition(char* clef)
{
	int position = 0;
	for (int i = 0; i < strlen(clef); i++)
	{
		position += 5;
	}
}