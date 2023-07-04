#include<stdio.h>

int main()
{
    int k = 0;
    for(int i = 5; i >= 1; i--)
    {
        k = i;
        for(int j = 1;  j <= i; j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}

/*
5 6 7 8 9
4 5 6 7
3 4 5
2 3
1
*/