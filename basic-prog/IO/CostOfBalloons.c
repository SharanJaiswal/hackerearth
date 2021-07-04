#include<stdio.h>
#include<stdlib.h>

int main()
{
    #include"fileio.h"
    int t, cost_green, cost_purple, participants, sum1 = 0, sum2 = 0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &cost_green, &cost_purple, &participants);
        int **record = (int **)calloc(2, sizeof(int *));
        record[0] = (int *)calloc(participants, sizeof(int));
        record[1] = (int *)calloc(participants, sizeof(int));
        for(int i = 0; i < participants; i++)
        {
            scanf("%d %d", &record[0][i], &record[1][i]);
            sum1 += record[0][i]*cost_green + record[1][i]*cost_purple;
            sum2 += record[0][i] * cost_purple + record[1][i]*cost_green;
        }
        printf("%d\n", (sum1 > sum2) ? sum2 : sum1);
        sum1 = 0;
        sum2 = 0;
    }
    return 0;
}