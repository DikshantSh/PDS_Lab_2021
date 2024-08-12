#include <stdio.h>
#include <math.h>

double power(double a, int b)
{
    double p = 1;
    for (int i = 1; i <= b; i++)
    {
        p = p * a;
    }
    return p;
}

double factorial(int n)
{
    double f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

double sine_series(double x)
{
    double x_in_radian = (M_PI * x) / 180.0;
    double sinx_calc = 0;
    double sinx_actual = sin(x_in_radian);
    for (int i = 1;; i++)
    {
        int a = ((2 * i) - 1);
        if (i % 2 != 0)
        {
            sinx_calc = sinx_calc + (power(x_in_radian, a) / factorial(a));
        }
        else
        {
            sinx_calc = sinx_calc - (power(x_in_radian, a) / factorial(a));
        }

        if (((sinx_calc - sinx_actual) <= 0.0001) && ((sinx_actual - sinx_calc) <= 0.0001))
        {
            break;
        }
    }
    return sinx_calc;
}

int main()
{
    double x;
    printf("The value of x (in degrees) : ");
    scanf("%lf", &x);

    double sinx = sine_series(x);
    printf("The value of sin%lf is %0.6lf", x, sinx);
}