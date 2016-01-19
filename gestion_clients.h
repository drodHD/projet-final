#include <stdio.h>
#include <stdlib.h>
#include "list_clients.h"

void gestion_clients()
{
	int chosen = 0;
	system("cls");
	printf("|****         Gestion des clients    	       *****|\n");
	printf("=====================================================\n");
	printf("1 - Afficher la liste des clients\n");
	printf("2 - Ajouter un nouveau client \n");
	printf("3 - Modiffier les donnees des clients \n");
	printf("4 - Supprimer un client \n");
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
			printf("Liste des clients\n");
printf("-------------------------------------------------------------------------------------------------------------\n");
				list_clients();
			break;
		case 2:
			printf("Ajouter un nouveau client\n");
			break;
		case 3:
			printf("Modifier les donnees d'un client\n");
			break;
		case 4:
			printf("Supprimer un client\n");
			break;
		case 5:
			printf("Retour vers la page d'accueil\n");
			main();
			break;
	}

}

