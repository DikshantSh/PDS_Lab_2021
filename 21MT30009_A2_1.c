#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter two positive integers : ");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        if (a % b == 0)
            printf("Result : %d divides %d. ", b, a);
        else
            printf("Result : %d does not divide %d. ", b, a);
    }
    else if (b > a)
    {
        if (b % a == 0)
            printf("Result : %d divides %d. ", a, b);
        else
            printf("Result : %d does not divide %d. ", a, b);
    }
    else
    {
        printf("Both are same and divides each other.");
    }
}