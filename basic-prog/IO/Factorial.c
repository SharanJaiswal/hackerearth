#include <stdio.h>
int main()
{
#include "fileio.h"
    int n, fact = 1;
    scanf("%d", &n);
    while (n)
    {
        fact *= n--;
    }
    printf("%d", fact);
    return 0;
}