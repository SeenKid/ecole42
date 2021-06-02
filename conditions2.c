#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[])
{
    
    int age = 2;
    
  if (age >= 18)
    {
      printf ("Vous etes majeur !");
    }
  else if (age > 4)		
    {
      printf ("Bon t'es pas trop jeune quand meme...");
    }
  else				
    {
      printf ("Areu areu petit bébé");
    }
}
