#include<stdio.h>
int main()
{
    int a0,a1,a2,a3,a4,a5;
    printf("Enter coefficient of 1 : ");
    scanf("%d",&a0);
    printf("Enter coefficient of x : ");
    scanf("%d",&a1);
    printf("Enter coefficient of x^2 : ");
    scanf("%d",&a2);
    printf("Enter coefficient of x^3 : ");
    scanf("%d",&a3);
    printf("Enter coefficient of x^4 : ");
    scanf("%d",&a4);
    printf("Enter coefficient of x^5 : ");
    scanf("%d",&a5);
    
    //Printing the polynomial

    printf("Polynomial : %+dx^5%+dx^4%+dx^3%+dx^2%+dx^1%+d\n",a5,a4,a3,a2,a1,a0);

    //Printing the derivative

    printf("Derivative : %+dx^4%+dx^3%+dx^2%+dx^1%+d",(a5*5),(a4*4),(a3*3),(a2*2),(a1*1));
    
}
