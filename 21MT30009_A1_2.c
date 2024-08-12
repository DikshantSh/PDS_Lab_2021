#include<stdio.h>
int main()
{
    float AB,BC,CA;
    printf("Enter side AB\n");
    scanf("%f",&AB);
    printf("Enter side BC\n");
    scanf("%f",&BC);
    printf("Enter side CA\n");
    scanf("%f",&CA);

    float perimeter;
    perimeter = (AB + BC + CA);
    float area_square;
    area_square = ((perimeter / 2) * ((perimeter / 2) - AB) * ((perimeter / 2) - BC) * ((perimeter / 2) - CA));
    printf("Perimeter = %f\n",perimeter);
    printf("Square Area = %f",area_square);
    return 0;
}


    
