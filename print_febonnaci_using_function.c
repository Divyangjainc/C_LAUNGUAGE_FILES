#include<stdio.h>
 
int main()
{
   int Number, First = 0, Second = 1, Next = 0, sum = 0;
 
   printf("Enter Maximum Number for Fibonacci Series = ");
   scanf("%d", &Number);
 
   printf("First %d Fibonacci Series Numbers:\n", Number);
 
   while( First <= Number)
   {
      printf("%d ", First);
      sum = sum + First;
      Next = First + Second;
      First = Second;
      Second = Next; 
   }
   printf("\nThe Sum of Fibonacci Series Numbers = %d\n", sum);
}