#include <stdio.h>

#define TVA 25

int main(void) 
{
	int prixHT = 15;
	int prixTTC = 0;

	prixTTC = prixHT + (prixHT * TVA / 100);

	printf("prixHT : %d\n", prixHT);
	printf("prix TTC : %d\n", prixTTC);
	return 0;
}