#include <stdio.h>
int main()
{
    #include "fileio.h"
    int n;
    while(1)
    {
        scanf("%d", &n);
        if(n == 42)
        {
            break;
        }
        printf("%d\n", n);
    }
    return 0;
}