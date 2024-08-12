#include <stdio.h>
#include <stdlib.h>

void members(int **s, int m, int b)
{

    int sum = 0;
    if (b % 2 == 0)
        sum = b / 2;
    else
        sum = (b / 2) + 1;

    int count = 0;
    int *fav = (int *)malloc(b * sizeof(int));
    for (int i = 0; i < b; i++)
        fav[i] = 0;

    for (int i = 0; i < m; i++)
    {
        int s1 = 0;
        for (int j = 0; j < b; j++)
        {
            s1 = s1 + s[i][j];
        }
        if (s1 >= sum)
        {
            count++;
            if (count == 1)
            {
                printf("Members reading at least %d books : ", sum);
                printf("%d ", (i + 1));
            }
            else
                printf(", %d ", (i + 1));

            for (int k = 0; k < b; k++)
            {
                if (s[i][k] == 1)
                {
                    fav[k]++;
                }
            }
        }
    }

    if (count != 0)
    {
        printf(".\nAnd the favorite books are : ");
        int count2 = 0;
        for (int i = 0; i < b; i++)
        {
            if ((fav[i] == count) && (count2 == 0))
            {
                printf("%d ", (i + 1));
                count2++;
            }
            else if (fav[i] == count)
            {
                printf(", %d ", (i + 1));
            }
        }
        printf(".");
    }
    else
    {
        printf("No one reads more than 50 percent. Hence no favourite books.");
    }

    free(fav);
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
    int m;
    printf("#members =  ");
    scanf("%d", &m);
    int b;
    printf("#books =  ");
    scanf("%d", &b);

    int **s = arr_d_all(m, b);
    printf("S matrix : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &s[i][j]);
        }
    }

    members(s, m, b);
    free(s);
}