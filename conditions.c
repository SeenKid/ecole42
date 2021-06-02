#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
  int age = 10;

  if (age >= 18)
    {
      printf ("Vous etes majeur !\n");
    }
  else
    {
      printf ("Vous etes mineur !\n"); return 0;
    }
}
