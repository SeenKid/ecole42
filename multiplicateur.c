#include <stdio.h>

int
main (void)
{
  int lettre;
  const int multiplicateur = 57;
  while (scanf ("%c", &lettre) == 1)
    {
      printf ("%02x", (multiplicateur * lettre) & 0xff);
    }
  printf ("\n");
  return 0;
}
