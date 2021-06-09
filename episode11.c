#include <stdio.h>

/*

	pointeur : variable contenant l'adresse d'une autre variable
	&p -> affiche une adresse de variable ou de pointeur

	[VARIABLES]
		maVariable  : valeur de la variable
		&maVariable : adresse de la variable


	[POINTEURS]
		*monPointeur = NULL ou *monPointeur = &maVariable
		(déclaration et initialisation du pointeur)

		monPointeur  : adresse de la variable pointée
		*monPointeur : valeur de la variable pointée
		&monPointeur : adresse du pointeur

*/

void  inverser_nombres(int *pt_nb1, int *pt_nb2) 
{
	int temporaire = 0; // B

	//printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);

	temporaire = *pt_nb1;
	*pt_nb1 = *pt_nb2;
	*pt_nb2 = temporaire;

	//printf("AVANT : A = %d et B = %d\n", nombreA, nombreB)

	//return nombreA;

}

int main(void)
{
	int nombreA = 15;
	int nombreB = 28;

	/* déclaration du pointeur */

	int *pointeurSurNombreA = &nombreA;
	int *pointeurSurNombreB = &nombreB;

	/*
	printf("adresse de NombreB = %p\n", &nombreB);
	printf("nombreB = %d\n", nombreB);
	*/

	printf("AVANT : A = %d et B = %d\n", nombreA, nombreB);
	//inverser_nombres(&nombreA, &nombreB);
	inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);
	printf("AVANT : A = %d et B = %d\n", nombreA, nombreB)

	return 0;
}