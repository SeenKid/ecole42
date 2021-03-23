#include <stdio.h>

int main(void) 
{
	//Déclaration et affectation d'une variable de type entier (int), d'un nombre a virgule (float)
	int aireDuCarre = 0;
	float prixReservation = 0.2;

	/*
		%d : nombre entier (int)
		%f : nombre flottant (float)
		%c ; caractère (char)
		%s : chaine de caractères (texte)
	*/

	printf("Le nombre est %d ou %f\n", aireDuCarre, prixReservation);

	return 0;
}