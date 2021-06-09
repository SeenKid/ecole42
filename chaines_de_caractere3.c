#include <stdio.h>
#include <stdlib.h>

int longueurChaine(const char* chaine);

int main(int argc, char *argv[])
{
    char chaine[] = "Salut";
    int longueur = 0;

    longueur = longueurChaine(chaine);

    printf("La chaine %s fait %d caracteres de long", chaine, longueur);

    
    return 0;
}

int longueurChaine(const char* chaine)
{
    int nombreDeCaracteres = 0;
    char caractereActuel = 0;

    do
    {
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;
    }
    while(caractereActuel != '\0'); // On boucle tant qu'on n'est pas arrivé à l'\0

    nombreDeCaracteres--; // On retire 1 caractère de long pour ne pas compter le caractère \0

    return nombreDeCaracteres;
}