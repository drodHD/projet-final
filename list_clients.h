#include <stdio.h>
#include <stdlib.h>

#define L 50//Nombre de ligne
#define C 100//Nombre maximal de caractère dans chaque ligne

void lecture(char (*tableau)[C]  , int ligne);

int nb;

int list_clients()
{
    char tableau[L][C];
    int i;

    lecture(tableau , L);


    for(i=0  ; i<nb ; i++)
    {
        printf("%s" , tableau[i]);
    }
    getch();
    return 0;
}


void lecture(char (*tableau)[C]  , int ligne){

    FILE *fichier= NULL;
    int i=0;


    fichier = fopen("list_clients.txt","r");

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
