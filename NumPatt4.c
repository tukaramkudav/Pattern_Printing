#include<stdio.h>

int main()
{
    for(int i = 1; i < 6; i++)
    {
        for(int j = 1; j <= 6- i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

*/