#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	signed char prenom[26];
	signed char stockage[256];

	printf("ton prénom de base est : %s\n", prenom);

	printf("changer ton nom ? : ");
	scanf("%s", stockage);

	strcpy(prenom, stockage);

	printf("ton nouveau prénom est : %s\n" prenom);

	return 0;
}
