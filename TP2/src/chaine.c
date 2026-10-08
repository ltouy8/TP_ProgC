#include <stdio.h>

int main(void)
{
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[100];
    char resultat[100];

    int i = 0;
    int longueur = 0;

    /* Calcul de la longueur */
    while (chaine1[longueur] != '\0')
    {
        longueur++;
    }

    printf("Longueur de chaine1 : %d\n", longueur);

    /* Copie de chaine1 */
    i = 0;

    while (chaine1[i] != '\0')
    {
        copie[i] = chaine1[i];
        i++;
    }

    copie[i] = '\0';

    printf("Copie : %s\n", copie);

    /* Copie de chaine1 dans resultat */
    i = 0;

    while (chaine1[i] != '\0')
    {
        resultat[i] = chaine1[i];
        i++;
    }

    /* Ajout de chaine2 */
    int j = 0;

    while (chaine2[j] != '\0')
    {
        resultat[i] = chaine2[j];
        i++;
        j++;
    }

    resultat[i] = '\0';

    printf("Concaténation : %s\n", resultat);

    return 0;
}