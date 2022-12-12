#include <iostream>
using namespace std;

class area_cal{
       public:
       int find_square(int a){
              return a*a;
       }

};

class std_cal :public area_cal
{
public:
       int add(int a, int b)
       {
              return a + b;
       }
       int sub(int a, int b)
       {
              return a - b;
       }
       int mul(int a, int b)
       {
              return a * b;
       }
       int div(int a, int b)
       {
              return a / b;
       }
};
int main()
{

       std_cal demo;

       printf("Addition is %d\n", demo.add(6, 3));

       printf("Subtraction is %d\n", demo.sub(6, 3));
       printf("Multiplication is %d\n", demo.mul(6, 3));

       printf("Division is %d\n", demo.div(6, 3));

       printf("Area of square is %d",demo.find_square(5));
}


