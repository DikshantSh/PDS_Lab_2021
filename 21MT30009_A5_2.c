#include <stdio.h>

int r2 = 0;
int reverse_recursive(int n)
{
    if (n == 0)
        return r2;

    r2 = (r2 * 10) + (n % 10);
    reverse_recursive(n / 10);
    
}

int reverse(int n)
{
    int r1 = 0;
    while (n != 0)
    {
        int d = n % 10;
        r1 = (r1 * 10) + d;
        n = n / 10;
    }
    return r1;
}

int main()
{
    int n;
    printf("Please provide the positive integer to be reversed : ");
    while (1 > 0)
    {
        scanf("%d", &n);
        if (n <= 0)
            printf("Invalud input. Please renter a positive integer.");
        else
            break;
    }

    int a = reverse(n);
    printf("The reverse of 1234 using reverse is : %d\n", a);
    int b = reverse_recursive(n);
    printf("The reverse of 1234 using reverse_recursive is : %d\n", b);
}