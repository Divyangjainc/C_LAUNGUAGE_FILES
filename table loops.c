//Printing 1 to 10 numbers
#include<stdio.h>
main()
{
	int n,i;
	
	printf("\nEnter a number for table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d * %d =%d",n,i,n*i);
	}
}