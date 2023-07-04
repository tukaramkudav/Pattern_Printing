#include<stdio.h>

int main()
{
    int i , j = 0;
    int k = 5;
    for(i = 1; i <= 5; i++)
    {
        for(j = 5; j >= 6-i; j--)
        {
            printf("%d",k);
        }
        k--;
        printf("\n");
    }
    return 0;
}

/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/