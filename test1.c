#include <stdio.h>

int main() {
	int score = 10; //le score que le joueur a

	if (score > 75)
		printf("Tu est passé ! \n"); //si il a plus de 75 il passe
	else printf("vous n'êtes pas passé !\n"); // sinon il ne passe pas
    return 0;
}