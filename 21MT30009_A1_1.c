#include <stdio.h>
#include <math.h>
int main()
{
    float Principal,Rate,Time;
    Principal=100000;
    Rate=12;
    Time=3;
    float Amount;
    Amount=Principal*(1 + (Rate/100))*(1 + (Rate/100))*(1 + (Rate/100));
    printf("Final Amount = %f",Amount);
    return 0;
}