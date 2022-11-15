#include<stdio.h>
main()
{
	int n,r,h;
	
	printf("Select the Shape to find area :");
	printf("\n1.Circle \n2. Triangle \n3. Rectangle or Square\n\n");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("\nEnter The Radius of Circle:");
			scanf("%d",&r);
			printf("\nArea of circle :  %f",3.14*r*r);
			break;
			
		case 2:
		    printf("\nEnter Base of triangle :");
			scanf("%d",&r);
			printf("\Enter height of triangle :");
			scanf("%d",&h);
			printf("\nArea of Triangle : %f",0.5*r*h);
			break;
			 
		case 3:
		    printf("\nEnter height:");
			scanf("%d",&r);
		    printf("\nEnter width :");
			scanf("%d",&h);
			printf("\nArea of Rectangle :%d",r*h);
			break;
			 
		default:
		    printf("\nINVALID INPUT!!");	 	 	
			
	}
}