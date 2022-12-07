#include <stdio.h>

int main() 
{
   int number, reminder, sum=0;
   printf("\nPlease enter any number\n");
   scanf("%d",&number);
   while (number > 0)
   {
      reminder = number % 10 ;
      sum = sum + reminder;
      number = number / 10 ;
  }
  printf("\nSum of the digits of given number = %d",sum);
  return 0;
}
