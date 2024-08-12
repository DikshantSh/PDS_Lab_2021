#include <stdio.h>
#include <math.h>

typedef struct comp
{
    float a;
    float b;
} comp;

void polr(comp x)
{
    float abs = sqrt((x.a * x.a) + (x.b * x.b));
    printf("Absolute value = %f : ", abs);

    float theta;
    float arg;

    if(x.b!=0)
    {
        theta = atan(x.b / x.a);
        arg = theta * 180 / M_PI;

    }
    if ((x.a < 0) && (x.b > 0))
    {
        
        arg = 180 + arg;
    }
    else if ((x.a < 0) && (x.b < 0))
    {
        
        arg = arg - 180;
    }
    else if(x.a==0)
    {
        arg=90;
    }
    else if(x.b=0)
    {
        arg=0;
    }

    printf("Argument = %f degrees\n", arg);
}

comp prdt(comp m, comp n)
{
    comp p;
    p.a = (m.a * n.a) - (m.b * n.b);
    p.b = (m.a * n.b) + (m.b * n.a);
    return (p);
}

comp sumf(comp m, comp n)
{
    comp s;
    s.a = m.a + n.a;
    s.b = m.b + n.b;
    return (s);
}

void disp(comp num)
{
    if ((num.b) > 0)
    {
        printf("%f + i %f\n", num.a, num.b);
    }
    else if ((num.b) < 0)
    {
        printf("%f - i %f\n", num.a, num.b);
    }
    else
    {
        printf("%f\n", num.a);
    }
}

int main()
{
    comp complex1, complex2;
    printf("Enter real part of first complex number : ");
    scanf("%f", &complex1.a);
    printf("Enter complex part of first complex number : ");
    scanf("%f", &complex1.b);

    printf("Enter real part of second complex number : ");
    scanf("%f", &complex2.a);
    printf("Enter complex part of second complex number : ");
    scanf("%f", &complex2.b);

    printf("\nFirst complex number : ");
    disp(complex1);

    printf("\nSecond complex number : ");
    disp(complex2);

    comp sum = sumf(complex1, complex2);
    printf("\nSum : ");
    disp(sum);

    comp prd = prdt(complex1, complex2);
    printf("\nProduct : ");
    disp(prd);

    printf("\nFirst complex number in polar form : ");
    polr(complex1);

    printf("\nSecond complex number in polar form : ");
    polr(complex2);
}