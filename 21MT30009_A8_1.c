#include <stdio.h>
#include <stdlib.h>
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void wrap(int *a,int n)
{
    int b=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=b;
}

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int *a;
    a = (int *)malloc(n * sizeof(int));
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("a[] = ");
    print(a,n);
    printf("After function call : \na[] = ");
    wrap(a,n);
    print(a,n);
    printf("After function call : \na[] = ");
    wrap(a,n);
    print(a,n);
    free(a);
}