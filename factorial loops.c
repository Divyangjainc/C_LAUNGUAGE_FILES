//factorial of a number
#include<stdio.h>
main()
{
	int n,i;
	int ans=1;
	
	printf("Enter a number to find factorial : ");
	scanf("%d",&n);
	
	for (i-n;i>0;i--)
	{
		ans = (ans*i);
	}
	printf("\nFactorial = %d",ans);
	
}