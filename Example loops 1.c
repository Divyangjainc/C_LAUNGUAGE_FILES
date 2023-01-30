#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
    }
    for(i=1;i<=4;i++)
    {
    	for(k=0;k<=i;k++)
    	{
    		printf(" ");
		}
    	for(j=4;j>=i;j--)
    	{
    		printf("* ");
		}
		printf("\n");
	}
}
