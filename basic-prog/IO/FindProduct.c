#include<stdio.h>
#include<stdlib.h>
#define PRIME 1000000007
int main()
{
    #include"fileio.h"
    int n, arr;
    unsigned long long prod = 1;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &arr);
        prod = ((prod % PRIME) * (arr % PRIME)) % PRIME;
    }
    printf("%llu", prod);
    return 0;
}