#include <stdio.h>
int main()
{
    int n;
    printf("Enter the num of elements (Max Size =9) :");

    while(1>0)
    {
        scanf("%d",&n);
        if((n>0)&&(n<9))
        break;
        else
        printf("Invalid input, renter :  ");
    }
    

    int arr[10];
    printf("Enter the elements in sorted order (separated by space):");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int a;
    printf("Enter the new value to be inserted :");
    scanf("%d", &a);

    printf("Old array before insertion  : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int i = 0;

    while (1)
    {
        if(i==(n-1))
        {
            arr[n]=a;
            break;
        }
        else if (a > arr[i] && a <= arr[i + 1])
        {
            for(int j=n;j>(i);j--)
            {
                arr[j]=arr[j-1];
            }
            arr[i+1]=a;
            break;
        }
        i++;

    }
    
    printf("New array after insertion  : ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}