#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer between 1 and 9 : \n");
    do
    {
        scanf("%d", &n);
        if ((n < 1) || (n > 9))
        {
            printf("The number entered is not between 1 and 9. Please re-enter a positive integer between 1 and 9.\n");
        }
    } while ((n < 1) || (n > 9));

    printf("Pattern : \n");

    int k = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k);
        }
        k--;
        printf("\n");
    }

    return 0;
}