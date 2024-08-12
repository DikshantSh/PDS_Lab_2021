#include <stdio.h>
#include <string.h>
int main()
{

    char a[10][11];
    strcpy(a[0], "messi");
    strcpy(a[1], "ronaldo");
    strcpy(a[2], "beckham");
    strcpy(a[3], "romario");
    strcpy(a[4], "klose");
    strcpy(a[5], "ronaldinho");
    strcpy(a[6], "kaka");
    strcpy(a[7], "maradona");
    strcpy(a[8], "pele");
    strcpy(a[9], "zidane");

    int max = 0;
    int count[10] = {0};

    char c;
    printf("Enter character to be searched : ");
    scanf("%c", &c);

    for (int i = 0; i < 10; i++)
    {
        int k = 0;

        while (a[i][k] != '\0')
        {
            if (a[i][k] == c)
                count[i]++;
            k++;
        }
        if (count[i] >= max)
            max = count[i];
    }
    if (max == 0)
        printf("\nCharacter is present in none.");
    else
    {
        printf("\nMaximum characters is present in :\n");
        for (int i = 0; i < 10; i++)
        {
            if (max == count[i])
                printf("%s\n", a[i]);
        }
    }
}
