#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

node *reverse(node *head)
{
    node *prev = NULL;
    node *temp = head;
    node *next2 = NULL;
    while (temp != NULL)
    {
        next2 = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next2;
    }
    head = prev;
    return (head);
}

node *input(node *head, int n)
{
    node *temp2, *temp;
    for (int i = 0; i < n; i++)
    {
        temp2 = (node *)malloc(sizeof(node));
        scanf("%d", &temp2->data);
        if (i == 0)
        {
            head = temp = temp2;
        }
        else
        {
            temp->next = temp2;
            temp = temp2;
        }
    }
    temp->next = NULL;
    return head;
}

int main()
{

    node *head;
    printf("Enter linked list : ");
    head = input(head, 5);

    printf("Original linked list : ");
    display(head);

    head = reverse(head);
    printf("Reversed linked list : ");
    display(head);

    return 0;
}