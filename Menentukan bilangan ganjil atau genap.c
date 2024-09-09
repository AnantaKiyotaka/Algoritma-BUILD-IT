#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int bilangan;

    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0)
    {
        printf("\n========================================");
        printf("\nBilangan tersebut adalah bilangan Genap|\n");
        printf("========================================");
    }
    else
    {
        printf("\n========================================");
        printf("Bilangan tersebut adalah bilangan Ganjil|\n");
        printf("========================================");
    }

    return 0;
}
