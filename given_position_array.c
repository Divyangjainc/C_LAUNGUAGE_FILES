#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],pos,size,i,item;
    clrscr();
    printf("Enter a size of array ");
    scanf("%d",&size);
    printf("Enter elements in array ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter elements in array "); 
    scanf("%d",&pos);
    printf("Enter item that you won ");
    scanf("%d",&item);
    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
}