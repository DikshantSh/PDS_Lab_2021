#include <stdio.h>

void diag(int n, int a[][10])
{
    int max = a[0][0];
    int i = 0, j = 0;
    while ((i < n) && (j < n))
    {
        if ((a[i][j]) >= max)
        {
            max = a[i][j];
        }
        i++;
        j++;
    }
    printf("The largest element in the main diagonal : %d\n", max);

    int min = a[0][n - 1];
    i = 0;
    j = n - 1;
    while ((i < n) && (j >= 0))
    {
        if ((a[i][j]) <= min)
        {
            min = a[i][j];
        }
        i++;
        j--;
    }
    printf("The smallest element in the secondary diagonal : %d\n", min);
}

int main()
{
    int a[10][10];
    int n;
    printf("Enter the dimension of the square matrix (N) : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the value of element [%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    diag(n, a);
}