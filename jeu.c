#include <stdio.c>
#pragma warning (disable : 4996)

// #include

int main
{
    unsigned char MAX_CARACTERES = 30;
    unsigned char MAX_PARTICIPANTS = 100;
    unsigned char MAX_CONCOURS = 20;

    printf("Entrez le mot EXIT");
    int entree;
    scanf("%s", &entree);

    if (entree == "EXIT")
        return 0;

    printf("toto");
}