#include <stdio.h>

int main(void) 
{
	int ageUtilisateur = 0;

	printf("Quel âge avez vous ?\n");
	scanf("%d", &ageUtilisateur);

	printf("vous avez %d ans.\n", ageUtilisateur);

	return 0;
}
