#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;
    printf("Point A : ");
    scanf("%f%f", &x1, &y1);
    printf("Point B : ");
    scanf("%f%f", &x2, &y2);
    printf("Point C : ");
    scanf("%f%f", &x3, &y3);

    float s1 = 0, s2 = 0, s3 = 0;
    s1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    s2 = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    s3 = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

    if ((s1 == s2) && (s2 == s3))
    {
        printf("The triangle is equilateral.");
    }
    else if ((s1 == s2) && (s1 != s3))
    {
        printf("The triangle is isosceles with |AB|=|BC|.");
    }
    else if ((s2 == s3) && (s2 != s1))
    {
        printf("The triangle is isosceles with |BC|=|AC|.");
    }
    else if ((s1 == s3) && (s1 != s2))
    {
        printf("The triangle is isosceles with |AB|=|AC|.");
    }
    else
    {
        printf("The triangle is neither isosceles nor equilateral.");
    }
}
