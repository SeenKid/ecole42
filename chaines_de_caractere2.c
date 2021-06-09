#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t + le \0

    // Initialisation de la chaîne (on écrit les caractères un à un en mémoire)
    chaine[0] = 'S';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '\0';

    // Affichage de la chaîne grâce au %s du printf
    printf("%s", chaine);

    return 0;
}