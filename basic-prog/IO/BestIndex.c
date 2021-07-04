// the whole code boils down to problem to find the range of index for a given element arr[i] within which its special sum will be calculated.
// Hence, for each element, we need to find the element till which will contribute to taht elements special sum.
// lets pick an index 'i' for which we will find its sp sum. Lets final ele of its sp_sum contributor be called 'range'.
// range = i + (sum of natural no.s where range < n(i.e., length of original array)). Hence we need to find that natural number.
// Lets suppose, org array is of size 1. So, Natural no. 1 will be limit of range. So i(index of ele which is 0 here), ie, i+1=1. But it gives index out of bound.
// Hence, (i-1) will be added to natural number series just for checking. 'j' wiil be counter of natural number, which is used to pre-check.
// So, iff when next value of j still keeps range < n, then only that next value of j gets added to range

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    #include"fileio.h"
    int n, i, j, k;
    long long max = INT_MIN;
    scanf("%d", &n);
    int *arr = (int *)calloc(n, sizeof(int));
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    long long *sp_sum = (long long *)calloc(n, sizeof(long long));
    for(i = 0; i < n; i++)
    {
        sp_sum[i] = 0;
        // boiled code including while loop. rest all is mere part of question
        int range = i-1, j = 0;
        while(range+j+1 < n)
        {
            j++;
            range += j;
        }
        for(k = i; k <= range; k++)
        {
            sp_sum[i] += arr[k];
        }
        if(max < sp_sum[i])
        {
            max = sp_sum[i];
        }
    }
    printf("%lld", max);
    return 0;
}