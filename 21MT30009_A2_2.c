#include <stdio.h>

int main()
{

    int a;
    printf("Enter a positive integers : ");
    scanf("%d", &a);

    float c = 0.0;

    if (a % 2 == 0)
    {
        c = (a * (a + 1)) / 2.0;
    }
    else
    {
        c = ((2 * a) * ((2 * a) + 1)) / 2.0;
    }

    printf("The sum is %f. ", c);
}
