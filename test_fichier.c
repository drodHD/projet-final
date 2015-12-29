#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
	FILE *P_FICHIER; 
  char NOM_FICHIER[30], NOM_PERS[30];
  int  C,NB_ENREG;

  
  printf("Entrez le nom du fichier a creer : ");
  scanf("%s", NOM_FICHIER);
  P_FICHIER = fopen(NOM_FICHIER, "w");  
  printf("Nombre d'enregistrements a creer : ");
  scanf("%d", &NB_ENREG);
  C = 0;
  while (C<NB_ENREG)
     { 
      printf("Entrez le nom de la personne : ");
      scanf("%s", NOM_PERS);
      fprintf(P_FICHIER, "%s\n", NOM_PERS);
      C++;
     }
  fclose(P_FICHIER);

  
  P_FICHIER = fopen(NOM_FICHIER, "r");  
  C = 0;
  while (!feof(P_FICHIER))
     {
      fscanf(P_FICHIER, "%s\n", NOM_PERS);
      printf("NOM : %s\n", NOM_PERS);
      C++;
     }
  fclose(P_FICHIER);
  return 0;
} 
