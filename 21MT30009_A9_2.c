#include <stdio.h>
#include <stdlib.h>

typedef struct stu
{
    char name[30];
    int marks;
} stu;


int binarySearch(int co, int n, stu a[])
{
    int l = 0;
    int r = n - 1;
    int m;

    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m].marks < co)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}

int main()
{
    printf("Enter number of students : ");
    int n;
    scanf("%d", &n);

    stu *a = (stu *)malloc(n * sizeof(stu));
    for (int i = 0; i < n; i++)
    {
        getchar();
        printf("Enter student %d name : ", (i + 1));
        gets(a[i].name);
        printf("Enter student %d marks : ", (i + 1));
        scanf("%d", &a[i].marks);
    }

    int co;
    printf("Enter cut off marks : ");
    scanf("%d", &co);

    int result = binarySearch(co, n, a);

    if (result != n)
    {
        printf("Students with at least cut-off marks : ");
        for (int i = result; i < n; i++)
        {
            printf("\nName = %s   marks = %d ", a[i].name, a[i].marks);
        }
    }
    else
    {
        printf("Empty ! ");
    }

    return 0;
}