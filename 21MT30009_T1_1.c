#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer between 1 and 9 : ");
    scanf("%d", &n);

    if ((n < 1) || (n > 9))
    {
        printf("Invalid Input.");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("%d", (n + 1 - i));
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}