#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements : ");
    while(1>0)
    {
        scanf("%d",&n);
        if((n>0)&&(n<10))
        break;
        else
        printf("Invalid input, renter :  ");
    }
    printf("Enter %d integers seprated by space : ",n);
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int n_i_o=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i]<arr[j])
            {
                n_i_o++;
                break;
            }
        }
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                n_i_o++;
                break;
            }
        }
        
    }
    printf("Not in Order = %d",n_i_o);  
    return 0;
}