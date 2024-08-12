#include <stdio.h>

int main()
{
    float x;
    printf("Enter calue of x (in radians) ");
    scanf("%f",&x);

    float sinx,cosx;

    sinx=x-((x*x*x)/6.0)+((x*x*x*x*x)/120.0)-((x*x*x*x*x*x*x)/5040.0);
    cosx=1-((x*x)/2.0)+(x*x*x*x)/24.0-(x*x*x*x*x*x)/720.0;

    printf("sin(x) = %f\n",sinx);
    printf("cos(x) = %f\n",cosx);

    float sin2x;
    sin2x=2*sinx*cosx;
    printf("sin(2x) = 2*sin(x)*cos(x) = %f\n",sin2x);

    sin2x=(2*x)-(((2*x)*(2*x)*(2*x))/6.0)+(((2*x)*(2*x)*(2*x)*(2*x)*(2*x))/120.0)-(((2*x)*(2*x)*(2*x)*(2*x)*(2*x)*(2*x)*(2*x))/5040.0);
    printf("sin(2x) (By series approxiamtion) = %f\n",sin2x);
}