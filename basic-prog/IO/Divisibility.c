#include<stdio.h>
#include<stdlib.h>
int main()
{
    #include"fileio.h"
    int n;
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(!(arr[n-1] % 10) ? "Yes" : "No");
    return 0;
}