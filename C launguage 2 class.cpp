#include<stdio.h>
main()
{
	int m1, m2, m3, m4, m5, sum;
	float per;
	
	printf("enter mark1:");
	scanf(%d,&m1);
	printf("enter mark2:");
	scanf(%d,&m2);
	printf("enter mark3:");
	scanf(%d,&m3);
	printf("enter mark4:");
	scanf(%d,&m4);
	printf("enter mark5:");
	scanf(%d,&m5);
	
	sum =m1+m2+m3+m4+m5;
	printf("\n\ntotal mark obtained :%d" sum);
	
	per+sum/5;
	printf("\n percentage :%f" ,per);
	
	if(per>75)
	{
		printf("\nDistinction");
	}
	
	if(per>65)
	{
		printf("\nfirst Class");
	}
	
	if(per>55)
	{
		printf("\nSecond Class");
	}
	
	if(per>35)
	{
		printf("\nPass Class");
	}
	
	else
	{
	    printf("\nFAIL!!");	
	}


