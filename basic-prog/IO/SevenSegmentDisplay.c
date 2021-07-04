#include<stdio.h>
int count[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int main()
{
    #include"fileio.h"
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char str[101] = {'\0'};
        int i=0, tot_count = 0;
        scanf("%s", str);
        while(str[i])
        {
            tot_count += count[str[i]-'0'];
            i++;
        }
        while(tot_count)
        {
            if(tot_count%2)
            {
                printf("7");
                tot_count -= 3;
            }
            else
            {
                printf("1");
                tot_count -= 2;
            }
        }
        printf("\n");
    }
    return 0;
}