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
    {
        first = last = newnode;
        first->flink = last->flink = first;
        first->blink = last->blink = first;
    }
    else
    {
        newnode->blink = newnode->flink = first;
        first->blink = first->flink = newnode;
        first = newnode;
    }
}
void insertlast()
{
    newnode = create();
    if (first == NULL)
    {
        first = last = newnode;
        first->flink = last->flink = first;
    }
    else
    {
        last->flink = newnode;
        newnode->blink = last;
        newnode->flink = first;
        last = newnode;
        first->blink = last;
    }
}
void insertposition()
{
    newnode = create();
    if (first == NULL)
    {
        first = last = newnode;
        first->flink = last->flink = first;
    }
    else
    {
        printf("Enter position to be inserted\t");
        scanf("%d", &position);
        for (ptr = first, i = 1; i < position; i++)
        {
            prev = ptr;
            ptr = ptr->flink;
        }
        prev->flink = ptr->blink = newnode;
        newnode->blink = prev;
        newnode->flink = ptr;
    }
}
void deletefirst()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        printf("Deleted node is %d\n", first->data);
        if (first->flink == first)
            first = last = NULL;
        else
        {
            first = first->flink;
            last->flink = first;
            first->blink = last;
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
        if (first->flink == first)
            first = last = NULL;
        else
        {
            last = last->blink;
            last->flink = first;
            first->blink = last;
        }
    }
}
void deleteposition()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        printf("Enter position to be deleted\t");
        scanf("%d", &position);
        for (i = 1, ptr = first; i < position; i++)
        {
            prev = ptr;
            ptr = ptr->flink;
        }
        printf("Deleted node is %d\n", ptr->data);
        ptr = ptr->flink;
        ptr->blink = prev;
        prev->flink = ptr;
    }
}
void traverse()
{
    if (first == NULL)
        printf("Memory not allocated\n");
    else
    {
        printf("Forward Traversal\n");
        ptr = first;
        do
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->flink;
        } while (ptr != first);
        printf("FIRST\nBackward Traversal\n");
        ptr = last;
        do
        {
            printf("%d <- ", ptr->data);
            ptr = ptr->blink;
        } while (ptr != last);
        printf("LAST\n");
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