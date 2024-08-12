#include <stdio.h>

int main()
{
    int a[10];
    printf("Enter number of elements in the array : ");
    int n;
    while (1 > 0)
    {
        scanf("%d", &n);
        if ((n >= 1) && (n <= 10))
            break;
        else
            printf("Invalid input, renter :  ");
    }

    printf("Enter the elements separated by space : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int even[10];
    int odd[10];
    int e1 = 0;
    int o1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[e1] = a[i];
            e1++;
        }
        else
        {
            odd[o1] = a[i];
            o1++;
        }
    }

    printf("The even integers in the array are  : ");
    for (int i = 0; i < e1; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("The odd integers in the array are  : ");
    for (int i = 0; i < o1; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
