#include <stdio.h>

int main(void)
{
    int nombre = 4096;
    int i;

    printf("%d en binaire : ", nombre);

    if (nombre == 0)
    {
        printf("0");
    }
    else
    {
        for (i = 31; i >= 0; i--)
        {
            if ((nombre >> i) & 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }

    printf("\n");

    return 0;
}