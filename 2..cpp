#include<stdio.h>
main()
{
	int n,s,i=0;
	printf("how many item you want to add? ");
	scanf("%d,&s");
	int numbers[s];
	
	while(i<s)
	{
		printf("Add a value %d: *,i+1");
		scanf("%d",&n);
		i++;
		numbers[i] = n;
	}
}