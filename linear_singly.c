#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int choice, position, i;
struct node
{
    int data;
    struct node *next;
} *first = NULL, *last = NULL, *newnode, *ptr, *prev;

struct node *create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\t");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
}
void insertfirst()
{
    newnode = create();
    if (first == NULL)
        first = last = newnode;
    else
    {
        newnode->next = first;
        first = newnode;
    }
}
void insertlast()
{
    newnode = create();
    if (first == NULL)
        first = last = newnode;
    else
        last->next = newnode;
    last = newnode;
}
void insertposition()
{
    newnode = create();
    if (first == NULL)
        first = last = newnode;
    else
    {
        printf("Enter position to insert\t");
        scanf("%d", &position);
        for (ptr = first, i = 1; i < position; i++)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = newnode;
        newnode->next = ptr;
    }
}
void deletefirst()
{
    if (first == NULL)
        printf("Memory is not allocated\n");
    else
    {
        printf("Deleted node is %d\n", first->data);
        first = first->next;
    }
}
void deletelast()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        ptr = first;
        while (ptr->next!=NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        printf("Deleted node is %d\n", last->data);
        prev->next = NULL;
        last = prev;
    }
}
void deleteposition()
{
    printf("Enter position to delete\t");
    scanf("%d", &position);
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        for (ptr = first, i = 1; i < position; i++)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        printf("Deleted node is %d\n", ptr->data);
        prev->next = ptr->next;
    }
}
void traverse()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        for (ptr = first; ptr != NULL;)
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}
void main()
{
    system("cls");
    printf("1.Insert First\n2.Insert last\n3.Insert position\n4.Delete First\n5.Delete Last\n6.Delete position\n7.Traverse\n8.Exit\n");
    do
    {
        printf("Enter your choice\t");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertfirst();
            break;
        case 2:
            insertlast();
            break;
        case 3:
            insertposition();
            break;
        case 4:
            deletefirst();
            break;
        case 5:
            deletelast();
            break;
        case 6:
            deleteposition();
            break;
        case 7:
            traverse();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    } while (choice != 8);
}