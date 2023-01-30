#include <stdio.h>

#include <conio.h>  

#include <stdlib.h>  

#include <math.h>  

void main()

{

int a,b,c,r, rectarea;

float circlearea, s1,s2,s3;

float s,triarea2;

clrscr();

printf("n Three Choices");

printf("n…………………….n 1- rectanglen 2- circlen 3- triangle");

printf("n Enter your choice :");

scanf("%d",&c);

switch(c)

{

case 1:  

  printf("n Enter breadth and length of rectangle:");

 scanf("%d%d",&a,&b);

 rectarea = a * b;

 printf("Area of rectangle with breadth %d and length %d is %d units",a,b,      rectarea);

 break;

case 2:

printf("n Enter the radius of circle:");

 scanf("%d",&r);

 circlearea = 3.14 * r * r;

 printf("Area of triangle with radius %d is %f units ",r, circlearea);

 break;

case 3:

 printf("n Enter the three side of triangle:n");

 scanf("%f%f%f",&s1,&s2,&s3);

 s = (s1 + s2 + s3)/2;

 triarea2 =sqrt(s *((s - s1) * (s - s2) * (s - s3)));

 printf("Area of triangle is %f",triarea2);

 break;

default:

 printf("Invalid choice");

}

getch();

}

