#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);

    int flag=0;

    for (int i = 1; i <= 1000; i++)
    {
        int k = i;
        int sum = 0;
        int digit;
        while (k != 0)
        {
            digit = k % 10;
            sum = sum + digit;
            k = k / 10;
        }
        if (sum > n)
        {
            flag++;
            if(flag==1)
            {
                printf("The numbers whose sum of digit is greater than n : ");
            }
            printf("%d ", i);
        }
    }

    if(flag==0)
    {
        printf("No number whose sum of digit is greater than n");
    }

    return 0;
}