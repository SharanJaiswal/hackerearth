// 1 house can be only in 1 grid, belongs to one person only. For 1 person, H cannot be spread to more than 1 grid.
// So, basically find whether if at least 2H are lying adjacent, then print NO, else print I/P with dots replaced by B.
// Make sure that 1H if present w/o any adjacent H, then at least its immediate surrounding must be B

#include<stdio.h>
#include<stdlib.h>
int main()
{
    #include"fileio.h"
    int n;
    scanf("%d", &n);
    char *str = (char *)calloc(n, sizeof(char));
    scanf("%*c%s", str);
    for(int i = 0; i < n; i++)
    {
        if(str[i]=='H' && n>1 && str[i+1]=='H')
        {
            printf("NO");
            return 0;
        }
        else if(str[i]=='H' && n==1)
        {
            break;
        }
        else if(str[i]=='.')
        {
            str[i]='B';
        }
    }
    printf("YES\n");
    printf("%s", str);
    return 0;
}