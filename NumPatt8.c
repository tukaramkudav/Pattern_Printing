#include<stdio.h>

int main()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int j = i; j >= 1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/