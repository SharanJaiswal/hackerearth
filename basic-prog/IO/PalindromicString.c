#include<stdio.h>
#include<string.h>
int main()
{
    #include "fileio.h"
    char str[101] = {'\0'};
    scanf("%s", str);
    int i, j;
    for(i=0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}