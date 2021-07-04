#include<stdio.h>
int main()
{
    #include"fileio.h"
    char str[10]={'\0'};
    scanf("%s", str);
    int flag = 0;
    for(int i = 0; flag == 0, i < 8; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
        {
            flag = 1;
        }
        else if ((str[i] >= '0' && str[i] <= '9') && (str[i+1] >= '0' && str[i+1] <= '9') && ((str[i]-'0'+str[i+1]-'0')%2!=0))
        {
            flag = 1;
        }
    }
    printf((!flag) ? "valid\n" : "invalid\n");
    return 0;
}