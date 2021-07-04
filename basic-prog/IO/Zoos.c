#include<stdio.h>
int main()
{
    #include"fileio.h"
    char c;
    int count_z = 0, count_o = 0;
    while((c=getchar()) != EOF)
    {
        (c == 'z') ? count_z++ : count_o++;
    }
    printf((2*count_z == count_o) ? "Yes" : "No");
    return 0;
}