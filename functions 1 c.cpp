//with return type without parameters
#include<stdio.h>
int add();
main()
{
//	int a;
//	a = add();
//	printf("\nAddition : %d",a);
	printf("\nAddition : %d",add());
}
int add()
{
	int a,b,ans;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	ans = a+b;
	return ans;
}