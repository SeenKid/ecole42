#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{

	int jeu;

	printf("A quel jeu voulez-vous jouer ?\n\n");
	printf("1. Minecraft\n");
	printf("2. Fortnite\n");
	printf("3. CS:GO\n");
	printf("4. Roblox\n");
	printf("5. PayDay 2\n");
	printf("6. The escapists 2\n");
	printf("7. Garry's mod\n");
	printf("\nVotre choix ? ");
  	scanf("%d", &jeu);

switch(jeu) 
{

	case 1:
		printf("Vous avez choisi de jouer à Minecraft !\n");
		break;
	case 2:
		printf("Vous avez choisi de jouer à Fortnite ! (mauvais choix)\n");
		break;
	case 3:
		printf("Vous avez choisi de jouer à CS:GO !\n");
		break;
	case 4:
		printf("Vous avez choisi de jouer à Roblox !\n");
		break;
	case 5:
		printf("Vous avez choisi de jouer à PayDay 2 !\n");
		break;
	case 6:
		printf("Vous avez choisi de jouer à The Escapists 2 !\n");
		break;
	case 7:
		printf("Vous avez choisi de jouer à Garry's mod !\n");
		break;
	default:
		printf("Votre choix de jeu n'a pas été correctement saisi. Vous ne jouerez donc à rien.\n");
		break;
}

printf("Made by TweekLG\n\n");

return 0;

}