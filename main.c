#include <stdio.h>
#include <stdlib.h>

#include "gestion_clients.h"
#include "gestion_vehicules.h"
#include "gestion_locations.h"

int main (int argc, char const *argv[])
{
		system("cls");
		int chosen = 0;

		//ACCEUIL
			printf(" ___________________________________________________\n");
			printf("|****        	   RENTACARSOFT     	       *****|\n");
			printf("=====================================================\n");
			printf("*-* ACCEUIL *-*\n");
			printf("1- Gestion des Clients\n");
			printf("2- Gestion des vehicules.\n");
			printf("3- Gestion des locations.\n");
			printf("4- Quitter le programme.\n");
			printf("----------------------------------------------------\n");

	while (chosen != 1 && chosen != 2 && chosen != 3 && chosen != 4)
	{
		printf("Veuillez entrer le chiffre corespondant a votre choix: > ");
		scanf("%d", &chosen);
	}

		switch(chosen)
		{
		case 1:
			printf("Gestion clients\n");
			gestion_clients();
			break;

		case 2:
			printf("Gestion vehicules\n");
			gestion_vehicules();
			break;

		case 3:
			printf("Gestion locations\n");
			gestion_locations();
			break;

		case 4:
			system("exit");
			break;
		}

	return 0;
}
