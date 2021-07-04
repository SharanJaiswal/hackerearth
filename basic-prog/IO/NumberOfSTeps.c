// #here there is constrwaint that Ai and Bi are between 1 and 5000. So, Ai wont be less than 1 at any time. If happens, then continuous subtraction will stop there.
// Ai has to continuously subtracted to make all Ai equal. Hence it has to be equal to minimum Ai present to acheive it. If not acheived, then print -1.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *a, *b, flag = 0, count = 0, min = 5000;

    scanf("%d", &n);
    a = (int*)calloc(n, sizeof(int));
    b = (int*)calloc(n, sizeof(int));
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        min = (a[i] < min) ? a[i] : min;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    flag = 1;
    while (flag)
    {
        flag = 0;
        for(int i = 0; i < n; i++)
        {
            while(a[i] > min && a[i] > 0)
            {
                a[i] -= b[i];
                flag = 1;
                count++;
            }
            if(flag)
            {
                min = (a[i] < min) ? a[i] : min;
                if (min < 0) { break; }
            }
        }
    }
    (min < 0) ? printf("-1\n") : printf("%d\n", count);
    return 0;
}