#include<stdio.h>

void main()
{
    int num[4][5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[0][i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[1][i]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[2][i]);
    }
    for(int i = 0; i < 5; i++)
    {


        printf("Enter a number : ");
        scanf("%d", &num[3][i]);
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("Enter a number : ");
        scanf("%d", &num[0][i]);
    }
}