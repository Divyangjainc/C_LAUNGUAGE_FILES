#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
	    for(j=5;j>=1;j--)
		{
		   printf(" ");	
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
		
    }
}