#include<stdio.h>

int main() 
{
    int number, cube;
    
    printf(" \n Please enter any integer value : ");
    scanf("%d",&number);

    cube = number * number * number;

    printf(" \n Cube of a given number %d is = %d", number, cube);

    return 0;
}