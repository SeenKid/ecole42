#include <stdio.h>


int main(int argc, char *argv[])
{
    char chaine1[] = "Tweek", chaine2[] = "Tweek";
    char chaine3[] = "test", chaine4[] = "Test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("Les chaines 1 et 2 sont identiques\n");
    }
    else
    {
        printf("Les chaines 1 et 2 sont differentes\n");
    }

    if (strcmp(chaine3, chaine4) == 0) // Si chaînes identiques
    {
        printf("Les chaines 3 et 4 sont identiques\n");
    }
    else
    {
        printf("Les chaines 3 et 4 sont differentes\n");
    }

    printf("Made by TweekLG w/ OpenClassRooms lessons");

    return 0;
}