#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[50];
    char roll_num[12];
    float cgpa;

} student;

void print_record(student *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d | Name = %s | Roll Number = %s | CGPA = %f ", (i + 1),a[i].name,a[i].roll_num,a[i].cgpa);
    }
}

void read_record(student *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter student %d name : ", (i + 1));
        gets(a[i].name);
        printf("Enter student %d roll number : ", (i + 1));
        gets(a[i].roll_num);
        printf("Enter student %d CGPA : ", (i + 1));
        scanf("%f", &a[i].cgpa);
        getchar();
    }
}

int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d", &n);
    getchar();

    student *a = (student *)malloc(n * sizeof(student));

    read_record(a, n);
    print_record(a,n);
}