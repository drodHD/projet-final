#include <stdio.h>
#include <stdlib.h>

#define L 50//Nombre de ligne
#define C 100//Nombre maximal de caractère dans chaque ligne

void read(char (*tableau)[C]  , int ligne);

int nb;

void list_vehicules()
{
    char tableau[L][C];
    int i;

    read(tableau , L);


    for(i=0  ; i<nb ; i++)
    {
        printf("%s" , tableau[i]);
    }
    getch();
}


void read(char (*tableau)[C]  , int ligne){

    FILE *fichier= NULL;
    int i=0;


    fichier = fopen("List_Vehicules.txt","r");

    if(fichier != NULL)
    {
        while ((i<ligne) && (fgets( tableau[i] , 50 , fichier) != NULL) )
            i++;

        nb=i;

        fclose(fichier);
    }
    else
    {
        printf("ERREUR : Impossible de trouver le fichier\n\n");
    }

}
