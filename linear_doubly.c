#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int choice, position, i;
struct node
{
    int data;
    struct node *flink;
    struct node *blink;
} *first = NULL, *last = NULL, *newnode, *prev, *ptr;
struct node *create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data\t");
    scanf("%d", &newnode->data);
    newnode->flink = NULL;
    newnode->blink = NULL;
}
void insertfirst()
{
    newnode = create();
    if (first == NULL)
        first = last = newnode;
    else
    {
        newnode->flink = first;
        first->blink = newnode;
        first = newnode;
    }
}
void insertlast()
{
    newnode = create();
    if (first == NULL)
        first = last = newnode;
    else
    {
        last->flink = newnode;
        newnode->blink = last;
        last = newnode;
    }
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
            ptr = ptr->flink;
        }
        prev->flink = newnode;
        newnode->blink = prev;
        newnode->flink = ptr;
        ptr->blink = newnode;
    }
}
void deletefirst()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        printf("Deleted node is %d\n", first->data);
        if (first->flink != NULL)
        {
            first = first->flink;
            first->blink = NULL;
        }
        else
        {
            first = NULL;
            last = NULL;
        }
    }
}
void deletelast()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        printf("Deleted node is %d\n", last->data);
        if (last->blink != NULL)
        {
            last = last->blink;
            last->flink = NULL;
        }
        else
        {
            last = NULL;
            first = NULL;
        }
    }
}
void deleteposition()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        printf("Enter position to delete\n");
        scanf("%d", &position);
        for (ptr = first, i = 1; i < position; i++)
        {
            prev = ptr;
            ptr = ptr->flink;
        }
        printf("Deleted node is %d\n", ptr->data);
        ptr = ptr->flink;
        prev->flink = ptr;
        ptr->blink = prev;
    }
}
void traverse()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        printf("Forward Traversal\n");
        for (ptr = first; ptr != NULL;)
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->flink;
        }
        printf("\nBackward Traversal\n");
        for (ptr = last; ptr != NULL;)
        {
            printf("%d <- ", ptr->data);
            ptr = ptr->blink;
        }
    }
    printf("\n");
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