#include <stdio.h>

int main(void) {

	signed char lettre = 'A';

	printf("Entrez une lettre :\n");
	scanf("%c", &lettre);

	printf("Lettre choisie => %c\n" lettre);

	return 0;
}