#include <stdio.h>

void change_nombre(int *nb)
{
	*nb = 15;
}

int main(void)
{
	int nombre = 0;

	printf ("nombre = %d\n", nombre);
	change_nombre(&nombre);
	printf ("nombre = %d\n", nombre);

	return 0;
}