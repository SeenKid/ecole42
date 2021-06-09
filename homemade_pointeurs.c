#include <stdio.h>

int interversion (int *pt_money, int *pt_age) {

	int temporaire = 0;

	temporaire = *pt_money;
	*pt_money = *pt_age;
	*pt_age = temporaire;

}

int interversion2 (int *pt_salade, int *pt_poulet) {

	int temporaire = 0;

	temporaire = *pt_salade;
	*pt_salade = *pt_poulet;
	*pt_poulet = temporaire;

}

int main (void) {

	int age = 17;
	int argent = 300;
	int poulet = 1;
	int salade = 0;

	int *pointeurAge = &age;
	int *pointeurArgent = &argent;

	printf("J'ai %d ans et j'ai %d € sur mon compte en banque\n", age, argent);
	interversion(pointeurAge, pointeurArgent);
	printf("J'ai %d ans et j'ai %d € sur mon compte en banque\n", age, argent);

	int *pointeurSalade = &salade;
	int *pointeurPoulet = &poulet;

	printf("je préfère manger de la %d (salade) plutôt que %d (poulet) car je suis un sacré fils de pute\n", salade, poulet);
	interversion(pointeurSalade, pointeurPoulet);
	printf("je préfère manger du %d (poulet) plutôt que de la %d (salade) car je suis un vrai bonhomme\n", salade, poulet);

	return 0;
}