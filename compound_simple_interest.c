#include<stdio.h>

int main()
{
    float PAmount, ROI, Time_Period, si;

    printf("\n Please enter the principal amount : \n");
    scanf("%f",&PAmount);

    printf("\n Please enter the Rate of interest : \n");
    scanf("%f",&ROI);

    printf("\n Please enter the Time_Period in years : \n");
    scanf("%f",&Time_Period);

    si = (PAmount * ROI * Time_Period) / 100;
    printf("\nSimple Interest  for Principal Amount %.2f is = %.2f",PAmount, si);

    return 0;
}