#include<stdio.h>

int main()
{
    int k = 0;
    for(int i = 1; i < 6; i++)
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
1
23
345
4567
56789
*/