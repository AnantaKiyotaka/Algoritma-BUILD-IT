#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(long long N)
{
    if (N <= 1)
        return 0;
    if (N == 2)
        return 1;
    if (N % 2 == 0)
        return 0;

    for (long long i = 3; i * i <= N; i += 2)
    {
        if (N % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    long long N;

    scanf("%lld", &N);

    if (isPrime(N))
    {
        printf("\n============\n");
        printf("Prima\n");
        printf("============");
    }
    else
    {
        printf("\n============\n");
        printf("Bukan\n");
        printf("============");
    }

    return 0;
}
