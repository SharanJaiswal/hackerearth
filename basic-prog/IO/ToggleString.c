#include<stdio.h>
int main()
{
    #include"fileio.h"
    char c;
    while((c = getchar()) != EOF)
    {
        putchar((c<='Z') ? (c+'a'-'A') : (c-('a'-'A')));
    }
    return 0;
}