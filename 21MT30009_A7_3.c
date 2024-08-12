#include <stdio.h>
int searchbin(int *aaray, int number, int ln, int ht)
{int mid = (ln + ht) / 2;
    if (ln <= ht)
    { if (aaray[ln] == number)
        return 1;
        
        else if (aaray[ht] == number)
        return 1;
        
        else if (number > aaray[mid])
        return searchbin(aaray, number, mid + 1, ht);
        
        else if (number < aaray[mid])
        return searchbin(aaray, number, ln, mid - 1);
        
        else if (number == aaray[mid])
        return 1;
        
    }
    else
    
        return 0;
    
}







void insertion(int *aaray, int key, int size)
{
    if (searchbin(aaray, key, 0, size - 1))
    {printf("This number is already present in the aarayay \n");
        return;
    }
    else
    {if (size == 0)
        aaray[0] = key;
        
        int i = 0;
        while (1)
        {
            if (key < aaray[0])
            {
                for (int j = size - 1; j >= 0; j--)
                 aaray[j + 1] = aaray[j];
                
                aaray[0] = key;
            }
            else if (key >= aaray[i] && i == size - 1)
            {
                aaray[size] = key;
                break;
            }
            else if (key > aaray[i] && key <= aaray[i + 1])
            {
                for (int j = size - 1; j > i; j--)
                aaray[j + 1] = aaray[j];
                
                aaray[i + 1] = key;
                break;
            }
            i++;
        }
    }
}
void deletion(int *aaray, int key, int size)
{
    if (searchbin(aaray, key, 0, size - 1))
    {
        int del_index = 0;
        if (aaray[del_index] == key)
        {
            for (int i = del_index; i < size; i++)
             aaray[i] = aaray[i + 1];
            
        }
        else
        {
            while (aaray[del_index] != key)
            del_index++;
            
            for (int i = del_index; i < size; i++)
            aaray[i] = aaray[i + 1];
            
        }
    }
    else
    {printf("The number is not present in the set\n");
        return;
    }
}
void display(int *aaray, int n)
{
    printf("{ ");
    for (int i = 0; i < (n-1); i++)
     printf(" %d ,", aaray[i]);
    
    printf(" %d }\n",aaray[n-1]);
}
int main()
{
    int aaray[100];
    int choice;
    int size = 0;
    while (1)
    {
        printf("Press 1 to insert numbers, 2 to delete numbers, 3 to display the set, and 0 to exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int key;
            printf("Enter the number to be inserted : \n");
            scanf("%d", &key);
            insertion(aaray, key, size);
            size++;
        }
        else if (choice == 2)
        {
            int key;
            printf("Enter the number to be deleted : \n");
            scanf("%d", &key);
            deletion(aaray, key, size);
            size--;
        }
        else if (choice == 3)
        display(aaray, size);
        
        else if (choice == 0)
        break;
        
    }







    return 0;
}