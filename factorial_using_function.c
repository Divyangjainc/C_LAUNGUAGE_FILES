#include<stdio.h>
#include<conio.h>
 
void main()
{
    int num,f;
    clrscr();
     
    printf("\n  Enter the number: ");
    scanf("%d",&num);
     
    f=factorial(num);
    printf("\n  The factorial of the number %d is %d",num,f);
    getch();
}
 
int factorial(int number)
{
    if(number==0 || number==1)
        return 1;
    else
        return(number * fact(number-1));
}