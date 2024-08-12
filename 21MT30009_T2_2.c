#include <stdio.h>

float series(float x, int y)
{
    float sum = 0;
    for (int i = 1; i <= y; i++)
    {
        float prod = 1;

        for (int j = 1; j <= i; j++)
        {
            prod = prod * x;
        }
        sum = sum + prod;
    }

    return sum;
}
int main()
{
    printf("Enter x : ");
    float x;
    scanf("%f", &x);
    printf("Enter y : ");
    int y;
    scanf("%d", &y);
    float sum = series(x, y);

    for (int i = 1; i <= y; i++)
    {
        if (i == 1)
        {
            printf("%f", x);
        }
        else
        {
            printf(" + %f ^ %d", x, i);
        }
    }

    printf(" is : %f", sum);
    return 0;
}