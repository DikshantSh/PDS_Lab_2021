#include <stdio.h>

void merge_array(int array1[], int a1, int array2[], int a2, int mrge_array[])
{
    int i = 0;
    int a11 = 0;
    int a22 = 0;

    while (i < (a1 + a2))
    {
        if (a11 == a1)
        {
            mrge_array[i] = array2[a22];

            a22++;
        }
        else if (a22 == a2)
        {
            mrge_array[i] = array1[a11];

            a11++;
        }
        else if ((array1[a11] <= array2[a22]) && (a11 < a1) && (a22 < a2))
        {
            mrge_array[i] = array1[a11];

            a11++;
        }
        else if ((array1[a11] > array2[a22]) && (a11 < a1) && (a22 < a2))
        {
            mrge_array[i] = array2[a22];

            a22++;
        }

        i++;
    }
}

int main()
{
    int array1[10];
    int a1;
    printf("Enter the number of elements in the first array (A) : ");
    scanf("%d", &a1);
    printf("Enter the elements of the first array (A) : ");
    for (int i = 0; i < a1; i++)
        scanf("%d", &array1[i]);

    int array2[10];
    int a2;
    printf("Enter the number of elements in the second array (B) : ");
    scanf("%d", &a2);
    printf("Enter the elements of the second array (B) : ");
    for (int i = 0; i < a2; i++)
        scanf("%d", &array2[i]);

    int mrge_array12[a1 + a2];
    merge_array(array1, a1, array2, a2, mrge_array12);
    printf("Merged array : ");
    for (int i = 0; i < (a1 + a2); i++)
        printf("%d ", mrge_array12[i]);
    printf("\n");

    int array3[10];
    int a3;
    printf("Enter the number of elements in the third array (C) : ");
    scanf("%d", &a3);
    printf("Enter the elements of the third array (C) : ");
    for (int i = 0; i < a3; i++)
        scanf("%d", &array3[i]);

    int mrge_array123[(a1 + a2 + a3)];
    merge_array(mrge_array12, (a1 + a2), array3, a3, mrge_array123);
    printf("Merged array : ");
    for (int i = 0; i < (a1 + a2 + a3); i++)
        printf("%d ", mrge_array123[i]);
}