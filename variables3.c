#include <stdio.h>

int
main (int argc, char *argv[])
{
  int resultat = 0, nombre1 = 0, nombre2 = 0;

  printf ("Entrez le nombre 1 : ");
  scanf ("%d", &nombre1);
  printf ("Entrez le nombre 2 : ");
  scanf ("%d", &nombre2);

  resultat = nombre1 + nombre2;

  printf ("%d + %d = %d\n", nombre1, nombre2, resultat);

  return 0;
}
