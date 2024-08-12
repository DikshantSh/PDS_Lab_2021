#include <stdio.h>
#include <string.h>

typedef struct student
{
    char roll_num[30];
    char name[30];
    char facad_code[30];

} student;

typedef struct faculty
{
    char emp_code[30];
    char name[30];
} faculty;

void func2(char facu[],student a[],faculty b[])
{
    for(int i=0;i<3;i++)
    {
        if(strcmp(facu,b[i].name)==0)
        {
            for(int j=0;j<5;j++)
            {
                if(strcmp(b[i].emp_code,a[j].facad_code)==0)
                {
                    printf("roll number : %s , name : %s\n",a[j].roll_num,a[j].name);
                }
            }
        }

    }
}


void func1(char roll_number[], student a[], faculty b[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(roll_number, a[i].roll_num) == 0)
        {
            
            for (int j = 0; j < 3; j++)
            {
                if (strcmp(a[i].facad_code, b[j].emp_code) == 0)
                {
                    printf("%s", b[j].name);
                }
            }
        }
    }
}

int main()
{
    student a[10];
    faculty b[10];

    strcpy(a[0].roll_num, "21RB033");
    strcpy(a[0].name, "Max");
    strcpy(a[0].facad_code, "16AL2014");

    strcpy(a[1].roll_num, "21FR016");
    strcpy(a[1].name, "Charles");
    strcpy(a[1].facad_code, "19AM2105");

    strcpy(a[2].roll_num, "20MC003");
    strcpy(a[2].name, "Daniel");
    strcpy(a[2].facad_code, "19AM2105");

    strcpy(a[3].roll_num, "22MR063");
    strcpy(a[3].name, "George");
    strcpy(a[3].facad_code, "18MS2144");

    strcpy(a[4].roll_num, "22FR055");
    strcpy(a[4].name, "Carlos");
    strcpy(a[4].facad_code, "16AL2014");

    strcpy(b[0].emp_code, "18MS2144");
    strcpy(b[0].name, "Lewis");

    strcpy(b[1].emp_code, "16AL2014");
    strcpy(b[1].name, "Alonso");

    strcpy(b[2].emp_code, "19AM2105");
    strcpy(b[2].name, "Sebastian");

    char roll_number[30];
    printf("Enter roll number of a student whose faculty advisor is to be searched : ");
    scanf("%s", &roll_number);
    func1(roll_number, a, b);

    char facu[30];
    printf("\nEnter the name of faculty member : ");
    scanf("%s", &facu);
    func2(facu, a, b);


}
