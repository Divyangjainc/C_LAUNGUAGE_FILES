//with return type with parameters
#include<stdio.h>
int add(int c, int d);
main()
{
	int a,b;
	printf("\nEnter a : ");
	scanf("%d",&a);
	printf("\nEnter a : ");
	scanf("%d",&b);
	
	printf("\nAddition : %d",add(a,b));
}
int add(int c,int d)
{
	int ans;
	ans = c + d;
	return ans;
}