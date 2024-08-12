#include <stdio.h>
#include <stdlib.h>

void saddle_point(int **a, int r, int c)
{
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int m1 = a[i][j], max = a[i][j];
            for (int k = 0; k < r; k++)
            {
                if (a[k][j] > max)
                    max = a[k][j];
                if (a[k][j] < m1)
                    m1 = a[k][j];
            }
            int min2 = a[i][j], max2 = a[i][j];
            for (int l = 0; l < c; l++)
            {
                if (a[i][l] > max2)
                    max2 = a[i][l];
                if (a[i][l] < min2)
                    min2 = a[i][l];
            }
            if (((a[i][j] == m1) && (a[i][j] == max2)) || ((a[i][j] == min2) && (a[i][j] == max)))
            {
                printf("Saddle point is a[%d][%d] = %d\n", i, j, a[i][j]);
                count++;
            }
        }
    }
    if (count == 0)
        printf("No saddle point exists for the given input matrix.\n");
}

int **arr_d_all(int r, int c)
{

    int **a = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    return a;
}

int main()
{
    printf("Enter number rows and columns : ");
    int r;
    int c;
    scanf("%d", &r);
    scanf("%d", &c);

    int **a = arr_d_all(r, c);
    printf("Enter the array (one row at a time) : \n");
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }
    saddle_point(a, r, c);
    free(a);
}