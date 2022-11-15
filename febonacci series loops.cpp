//febonacci series
#include<stdio.h>
main()
{
	int n,i,n1=0,n2=1,n3;
	
	printf("Enter howmany numbers of fibonacci series do u want :");
	scanf("%d",&n);
	printf("%d",&n1);
	printf("%d",&n2);
	for(i=1;i<=n-2;i++);
	{
		n3 = n1 + n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
	}
}