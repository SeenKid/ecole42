#include <stdio.h>
#include <stdlib.h>

/* Not currently working */

int main(void) 
{

	int nombreJoueurs = 0;
	int *liste_joueurs = NULL;
	int i;

	printf("Combien de joueurs vont jouer avec vous ?");
	scanf("%d" &nombreJoueurs);

	liste_joueurs = malloc(sizeof(int) * nombreJoueurs);
	//liste_joueurs = calloc(nombreJoueurs, sizeof(int));

	if(liste_joueurs == NULL)
		exit(1);

	for(i = 0 ; i < nombreJoueurs ; i++) 
	{
		printf("Joueur %d --> numéro %d\n", i + 1, i * 3);
		liste_joueurs[i] = i * 3;
	}

	for(i = 0 ; i < nombreJoueurs ; i++) 
	{
		printf("[%d] ", liste_joueurs[i]);
	}

	/* *********************************************** */

	free(liste_joueurs);

	return 0;
}
