#include <stdio.h>
#include <stdlib.h>

#include "list_vehicules.h"
#include "info_vehicules.h"



void gestion_vehicules()
{
	int chosen = 0;
	system("cls");
	printf("|****         Gestion des vehicules    	       *****|\n");
	printf("=====================================================\n");
	printf("1 - Afficher la liste totale des vehicules\n");
	printf("2 - Information sur les vehicules \n");
	printf("3 - Afficher la liste de vehicules en location \n");
	printf("4 - Afficher la liste de vehicules disponible \n");
	printf("5 - Retour vers la page d'accueil\n");
	printf("----------------------------------------------------\n");

	while(chosen != 1 && chosen != 2 && chosen != 3 && chosen != 4 && chosen != 5)
	{	
		printf("Veuillez entrer le chiffre corespondant a votre choix: > ");
		scanf("%d", &chosen);
	}

	switch(chosen)
	{
		case 1:
			printf("La liste totale des vehicules\n");
			printf("----------------------------------------------------\n");
					list_vehicules();
			break;

		case 2:
			printf("Information sur les vehicules\n");
			printf("-------------------------------------------------------------------------\n");
					info_vehicules();

			break;

		case 3:
			printf("Afficher la liste des vehicules en location \n");
			break;

		case 4:
			printf("Afficher la liste des vehicules disponible\n");
			break;

		case 5:
			printf("Retour vers la page d'accueil\n");
			main();
			break;
				
	}

}
