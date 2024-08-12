#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of terms (a positive number).\n");
    do
    {
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("The number entered is not a positive number. Please re-enter a positive number.\n");
        }
    } while (n <= 0);

    float x;
    printf("Enter a real number 'x'.\n");
    scanf("%f", &x);

    float sum = 1;
    float j = 1;

    for (int i = 2; i <= n; i++)
    {
        j = (j * x) / (i - 1);
        sum = sum + j;
    }

    printf("The Taylor series upto n terms add upto : %f", sum);

    return 0;
}
