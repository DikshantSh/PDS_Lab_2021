#include <stdio.h>
int n;

void OrthoNormal(float mat[][4], float trans[][4])
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            float sum_prod = 0;
            for (int k = 0; k < n; k++)
            {
                sum_prod = sum_prod + mat[i][k] * trans[k][j];
            }
            if (i == j)
            {
                if ((sum_prod > (1.0 - 0.000001)) && (sum_prod < (1.0 + 0.000001)))
                {
                    c++;
                }
            }
            else if (i != j)
            {

                if ((sum_prod > (0.0 - 0.000001)) && (sum_prod < (0.0 + 0.000001)))
                {
                    c++;
                }
            }
        }
    }
    if (c == (n * n))
        printf("\nThe matrix is orthonormal.");
    else
        printf("\nThe matrix is not orthonormal.");
}

void matTranspose(float mat[][4], float trans[][4])
{
    printf("\nOriginal Array : \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }

    printf("\nTransposed Array : \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f ", trans[i][j]);
        }
        printf("\n");
    }
}

void matrixInput(float mat[][4])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter array value at index %d , %d : ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }

    printf("\nEntered array :\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float mat[4][4];
    printf("Enter array the number of rows,columns of square matrix : ");
    scanf("%d", &n);

    matrixInput(mat);

    float trans[4][4];
    matTranspose(mat, trans);

    OrthoNormal(mat, trans);
}