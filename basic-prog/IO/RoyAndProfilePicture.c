#include<stdio.h>
int main()
{
    #include"fileio.h"
    int l, n;
    scanf("%d %d", &l, &n);
    while(n--)
    {
        int w, h;
        scanf("%d %d", &w, &h);
        if(w < l || h < l)
        {
            printf("UPLOAD ANOTHER\n");
        }
        else if(w >= l && h >= l)
        {
            if(w == h)
            {
                printf("ACCEPTED\n");
            }
            else
            {
                printf("CROP IT\n");
            }
        }
    }
    return 0;
}