#include <stdio.h>
#include <string.h>

struct Player
{
	signed char username[256];
	int hp;
	int mana;
};

typedef struct Bot
{
	signed char username[256];
	int hp;
	int mana;
} Bot;

typedef struct Player Player;

int main(void) {

	signed char replay[] = "";

	struct Player pl = {"Tweek", 100, 100};

	printf("Nom du joueur : %s\n", pl.username);
	printf("PV du joueur : %d\n", pl.hp);
	printf("Mana du joueur : %d\n\n", pl.mana);

	/* ------------------------------------------- */ 

	struct Bot bot = {"Bot1", 150, 200};

	strcpy(bot.username, "Bot");

	printf("Nom du Bot : %s\n", bot.username);
	printf("PV du Bot : %d\n", bot.hp);
	printf("Mana du Bot : %d\n\n", bot.mana);

	/* ------------------------------------------- */ 
 
        printf("Voulez vraiment lancer un duel ? ( 1 = Oui // 0 = Non)\n --->");
		scanf("%s", replay);
    
    return 0;

}