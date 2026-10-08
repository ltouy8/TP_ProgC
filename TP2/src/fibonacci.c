#include <stdio.h>

int main(void)
{
    int n = 7;
    int precedent = 0;
    int suivant = 1;
    int resultat;

    printf("Suite de Fibonacci : ");

    for (int i = 0; i <= n; i++)
    {
        printf("%d", precedent);

        if (i < n)
        {
            printf(", ");
        }

        resultat = precedent + suivant;
        precedent = suivant;
        suivant = resultat;
    }

    printf("\n");

    return 0;
}