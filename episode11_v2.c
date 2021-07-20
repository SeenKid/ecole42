#include <stdio.h>

/*
Un pointeur (change_nombre int *nb)
*/

void change_nombre(int *nb)
{
	*nb = 15;
}

/* 
J'aurai pu return la value en faisant : 

int change_nombre(int *nb) {

	return 15;
}

voir la vidéo de formation video pour comprendre || C episode 11

*/


int main(void)
{
	int nombre = 0;

	printf ("nombre = %d\n", nombre);
	change_nombre(&nombre);
	printf ("nombre = %d\n", nombre);

	return 0;
}
