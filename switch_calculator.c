#include<stdio.h>
main()
{
	int a,b,ans,n;
	char c;
	
	again:
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	
	printf("\n\nSelect Operation to Perform : ");
	printf("\n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division\n\n");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			ans = a+b;
			printf("\nAddition = %d",ans);
			break;
		case 2:
		    printf("\nSubtraction = %d",a-b);
			break;
		case 3:
		    printf("\nMultiplication = %d",a*b);
			break;
		case 4:
		    printf("\nDivision = %d",a/b);
			break;
		default:
		    printf("\nINVALID INPUT!!");	
	}
	printf("\nDo you want to perform another operration ? (y/n)");
	fflush(stdin);
	scanf("%c",&c);
	
	if(c == 'y')
	{
		goto again;
	}
	printf("\nthank you!!");
}