#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Welcome To The Game kaun Banega Crorepati It Contains 4 Questions");

    for(i=1;i<=5;i++);
	{
		n=0;
		switch(i)
		{
		case 1:
			printf("In what direction muslim pray 1.East 2.South 3.Nearby Mosque's direction 4.Mecca's direction ");
			scanf("%d",&n);
			if(n==4)
			{
					printf("You have entered the correct answer  Your Next Question is ",i);
			}
			else
			{
				printf(" You have entered the wrong answer Better Luck Next Time",i-1);
				i=11;
			}
			break;
		case 2:
			printf("Who is the Mother of RAMA in Ramayana 1.Kousalya 2.Kaikai 3.Sumitra 4.Mantra ");
			scanf("%d",&n);
			if(n==1)
			{
					printf("You have entered the correct answer Your Next Question is ",i);
			}
			else
			{
				printf(" You have entered the wrong answer Better Luck Next Time",i-1);
				i=11;
			}
			break;
		case 3:
			printf("What is the Symbol of Nazis(Army of Great Hitler) 1.Cross 2.Skull and Bones 3.Owl 4.Swastika ");
			scanf("%d",&n);
			if(n==4)
			{
					printf("You have entered the correct answer  Your Next Question is ",i);
			}
			else
			{
				printf(" You have entered the wrong answer Better Luck Next Time ",i-1);
				i=11;
			}
			break;
		case 4:
			printf("Who among these is not an Railway Minister 1.Mamtha Banerjee 2.Lal Bahadur Shastri 3.Geetha Mukerjee 4.George Fernandis ");
			scanf("%d",&n);
			if(n==3)
			{
					printf("You have entered the correct answer  Your Next Question is ",i);
			}
			else
			{
				printf(" You have entered the wrong answer Better Luck Next Time ",i-1);
				i=11;
			}
			break;
	}