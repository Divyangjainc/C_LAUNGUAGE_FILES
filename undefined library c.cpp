//1. without return types without parameters/arguments.
#include<stdio.h>
void add(); //function declaration
main()
{
	add();
	add();
	add();
	add();
	    //function call
}
void add()       //function defination 
{
	int a,b,ans;
	
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	ans = a+b;
	printf("\nAddition = %d",ans);
 }