#include<stdio.h>
#include<stdlib.h>

int main()
{
    #include"fileio.h"
    int n, i, half, sum_odd = 0, sum_even = 0;
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    half = n/2;
    for (i = 0; i < half; i++)
    {
        while (arr[i] >= 10)
        {
            arr[i] /= 10;
        }
        if (i % 2)
        {
            sum_odd += arr[i];
        }
        else
        {
            sum_even += arr[i];
        }
    }
    for (i = half; i < n; i++)
    {
        if (i % 2)
        {
            sum_odd += arr[i] % 10;
        }
        else
        {
            sum_even += arr[i] % 10;
        }
    }
    printf((sum_even - sum_odd) % 11 ? "NAN" : "OUI");
    return 0;
}