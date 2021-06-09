#include <stdio.h>

int main(int argc, char *argv[])
{
    char lettre = 0;

    printf("Veuillez entrer une lettre : \n ------------>");
    scanf("%c", &lettre);
    printf("Vous avez entré la lettre --> %c\n", lettre);

    return 0;
}