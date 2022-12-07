#include <stdio.h>
int main() {
    int number, loop, flag = 0;

    number = 19;

    for (loop = 2; loop <= number / 2; ++ loop) {

        // condition for non-prime 
        if (number % loop == 0) {
            flag = 1;
            break;
        }
   }

   if (number == 1) {
      printf ("1 is neither prime nor composite.");
   }
   else {
        if (flag  == 0)
            printf("%d is a prime number.", number);
        else
            printf("%d is not a prime number.", number);
   }

   return 0;
}  