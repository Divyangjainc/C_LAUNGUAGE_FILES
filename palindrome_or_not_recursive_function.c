#include<stdio.h>

  
int main(){

   int num, temp, rev, digit;

   //Input number
   printf("Enter a number \n");
   scanf("%d", &num);
    

   temp = num;
   
   //Reverse a number
   while( temp > 0) {
       
       digit = temp % 10;
       rev   = rev * 10 + digit;
       temp  = temp / 10;
   }

   /*
   If original number and reverse of a number
   is same, then it's palindrome
   */
   if( num == rev) {
       printf(" %d is a Palindrome number", num);
   } else {
       printf(" %d is not a Palindrome number", num);
   }

    return 0;
}