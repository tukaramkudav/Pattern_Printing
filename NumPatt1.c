#include<stdio.h>

int main()
{
    int i , j = 0;
    for(i = 1; i < 6; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
/*
1
22
333
4444
55555
*/