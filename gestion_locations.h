#include <stdio.h>
#include <stdlib.h>


void gestion_locations()
{
	int chosen = 0;
	system("cls");
	printf("|****         Gestion des locations    	       *****|\n");
	printf("=====================================================\n");
	printf("1 - Rechercher un vehicule\n");
	printf("2 - Louer un vehicule \n");
	printf("3 - Recevoir un vehicule loue \n");
	printf("4 - Retour vers la page d'accueil \n");
	printf("----------------------------------------------------\n");

	while(chosen != 1 && chosen != 2 && chosen != 3 && chosen != 4 && chosen != 5)
	{	
		printf("Veuillez entrer le chiffre corespondant a votre choix: > ");
		scanf("%d", &chosen);
	}

	switch(chosen)
	{
		case 1:
			printf("Rechercher un vehicule\n");
			break;

		case 2:
			printf("Louer un vehicule\n");
			break;

		case 3:
			printf("Recevoir un vehicule loue\n");
			break;

		case 4:
			printf("Retour vers la page d'accueil\n");
			main();
			break;
				
	}

}
