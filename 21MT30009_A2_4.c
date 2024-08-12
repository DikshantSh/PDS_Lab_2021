#include <stdio.h>
#include <math.h>

int main()
{
    int m;
    printf("Enter the number of machines: ");
    scanf("%d", &m);
    int d;
    printf("Enter the day number (1-7): ");
    scanf("%d", &d);

    int n;
    int k = 0;
    float b = 0;
    float a = 0;

    switch (d)
    {
    case 1:
        n = m;
        break;

    case 2:
        a = ((7 * m) / 4.0);
        n = round(a);
        break;
    case 3:
    case 6:

        printf("Enter number of machines under maintenance:");
        scanf("%d", &k);
        a = (7 * (m - k)) / 4.0;
        n = round(a);
        break;
    case 4:
    case 5:
    case 7:

        printf("Enter boosting factor: ");
        scanf("%f", &b);
        a = m * (1 + b);
        n = round(a);
        break;

    default:
        printf("Invalid entered days:");
        return 0;
        break;
    }

    printf("Number of manufactured cars = %d", n);
}
