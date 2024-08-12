#include <stdio.h>

int main()
{
    int a[50];
    int b[50];
    int n, m;
    printf("Enter number of elements in array A : ");
    scanf("%d", &n);

    if ((n > 50) || (n < 0))
    {
        printf("Invalid Input.");
        return 0;
    }

    printf("Enter elements in array A : ");//Only poisitve or negative number can be entered.
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in array B : ");
    scanf("%d", &m);

    if ((m > 50) || (m < 0))
    {
        printf("Invalid Input.");
        return 0;
    }

    printf("Enter elements in array B : ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[100];
    int k = m + n;
    int index_a = 0;
    int index_b = 0;
    int index_c = 0;
    int alt = 0;

    while (index_c < k)
    {
        if (((alt == 0) && (index_a < n)) || (index_b == m))
        {
            c[index_c] = a[index_a];

            index_c++;
            index_a++;
            if (index_a == n)
            {
                alt = 1;
                continue;
            }

            if (((a[index_a] > 0) && (a[index_a - 1] < 0)) || ((a[index_a] < 0) && (a[index_a - 1] > 0)))
            {
                alt = 1;
            }
        }
        if (((alt == 1) && (index_b < m)) || (index_a == n))
        {
            c[index_c] = b[index_b];

            index_c++;
            index_b++;
            if (index_b == n)
            {
                alt = 0;
                continue;
            }

            if (((b[index_b] > 0) && (b[index_b - 1] < 0)) || ((b[index_b] < 0) && (b[index_b - 1] > 0)))
            {
                alt = 0;
            }
        }
    }

    printf("Array C : ");

    for (int l = 0; l < k; l++)
    {
        printf("%d ", c[l]);
    }
}