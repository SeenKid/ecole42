#include <stdio.h>

/* bordel total ! */ 

int main(void) {

	signed char mot[] = "Bonjour tout le monde !";
	signed char mot1[] = {'c', 'o', 'u', 'c', 'o', 'u'};
	signed char mot2[6];

	mot2[0] = 'c';
	mot2[1] = 'o';
	mot2[2] = 'u';
	mot2[3] = 'c';
	mot2[4] = 'o';
	mot2[5] = 'u';


	printf("%s\n", mot);
	printf("%s\n", mot1);
	printf("%s\n", mot2);

	return 0;
}
