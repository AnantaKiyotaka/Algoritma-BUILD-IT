#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char A[100], B[100];

    scanf("%s", A);
    scanf("%s", B);

    if (strlen(A) != strlen(B))
    {
        printf("\n============\n");
        printf("BERBEDA\n");
        printf("============\n");
    }
    else
    {
        if (strcmp(A, B) == 0)
        {
            printf("\n============\n");
            printf("IDENTIK\n");
            printf("============\n");
        }
        else
        {
            printf("\n============\n");
            printf("MIRIP\n");
            printf("============\n");
        }
    }

    return 0;
}
