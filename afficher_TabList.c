#include <stdio.h>
#include <stdlib.h>

#define L 50
#define C 100

void lire(char (*tableau)[C]  , int ligne);

int nb;

int main()
{
    char tableau[L][C];
    int i;

    lire(tableau , L);


    for(i=0  ; i<nb ; i++)
    {
        printf("%s" , tableau[i]);
    }
    getch();
    return 0;
}


void lire(char (*tableau)[C]  , int ligne){

    FILE *fichier= NULL;
    int i=0;


    fichier = fopen("fichier.txt","r");

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
