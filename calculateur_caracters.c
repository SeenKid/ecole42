#include <stdio.h>

int longueurChaine(const char* chaine);

int main(int argc, char *argv[])
{
    char chaine[] = "Tweek c'est un sacré bg nan ? (nan)";
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
    while(caractereActuel != '\0'); 

    nombreDeCaracteres--;

    return nombreDeCaracteres;
}