#include <stdio.h>

int main(void)
{
    int d = 0x80008;

    int bit4 = (d >> 3) & 1;
    int bit20 = (d >> 19) & 1;

    if (bit4 == 1 && bit20 == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}