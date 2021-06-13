#include <stdio.h>
#include <stdlib.h>

int main(void){

	signed char prenom[26];
	signed char password[150];

	printf("Quel est votre prénom ? \n -->");
	scanf("%s", prenom);

	printf("Quel est votre mot de passe ? \n -->");
	scanf("%s", password);

	printf("Votre prénom est ''%s'' et votre mot de passe est ''%s''", prenom, password);

}

/* scanf = pas sécurisé */ 
