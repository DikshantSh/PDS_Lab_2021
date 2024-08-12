#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[30];
    printf("The original array is : ");
    for (int i = 0; i < 30; i++)
    {
        a[i] = (rand() % 46) + 5;
    }

    for (int i = 0; i < 30; i++)
    {
        printf("%d ", a[i]);
    }
    
    //As we know that mid index of array of size 30 is 14 and 15
    for (int i = 0; i < 15; i++)
    {
        int k=a[i];
        a[i]=a[29-i];
        a[29-i]=k;
    }

    printf("\nThe reversed array is : ");

    for (int i = 0; i < 30; i++)
    {
        printf("%d ", a[i]);
    }
}
