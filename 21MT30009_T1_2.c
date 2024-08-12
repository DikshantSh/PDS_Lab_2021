#include <stdio.h>

int main()
{
    int a[100];
    int n;
    printf("Enter number of elements to be entered (at most 100) : ");
    scanf("%d", &n);

    if ((n > 100) || (n < 1))
    {
        printf("Invalid Input. ");
        return 0;
    }

    printf("Enter elements of set : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int swap = a[j];
                a[j] = a[i];
                a[i] = swap;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < n - 2; i++)
    {

        int c = a[i + 1] - a[i];
        int b = a[i + 2] - a[i + 1];

        if ((c == 1) && (b == 1))
        {
            printf("A subset with three consecutive integers : { %d , %d , %d }\n", a[i], a[i + 1], a[i + 2]);
            count++;
        }
    }

    if (count == 0)
    {
        printf("No subset with three consecutive integers.");
    }
}