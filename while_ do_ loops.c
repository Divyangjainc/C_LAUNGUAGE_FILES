#include<stdio.h>
main()
{
	int i;

    do
    {
    	printf("\mEnter a value : ");
    	scanf("%d",&i);
    	printf("I = %d",i);
    }while(i!=0);
    printf("\nYou entered Zero.");