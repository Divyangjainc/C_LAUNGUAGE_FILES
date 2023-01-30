//without return type with parameters
#include<stdio.h>
void add(int c,int d);
main()
{
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	add(a,b);
	add(45,12);
}
void add(int c, int d)
{
	int ans;
	ans = c + d;
	printf("\nAddition = %d",ans);
}