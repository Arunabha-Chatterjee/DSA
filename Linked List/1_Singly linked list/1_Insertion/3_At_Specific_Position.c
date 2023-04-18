#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *tail;
int size = 0;
void display()
{
    temp = head;
    if (head == NULL)
    {
        printf("The list is empty.");
    }
    else
    {
        printf("\nUpdated list : ");
        while (temp != NULL)
        {
            printf("%d  ", temp->data);
            temp = temp->next;
        }
    }
}

void add(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        tail->next = newnode;
    }
    newnode->next = NULL;
    tail = newnode;
    size++;
}
void insert_at_specific_position()
{
    printf("\nSize of the list : %d", size);
    temp = head;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    int position;
    printf("\nEnter position : ");
    scanf("%d", &position);
    if (head == NULL && position != 1)
    {
        printf("\nEmpty list");
    }
    else if (position > size + 1 || position < 1)
    {
        printf("Invalid position.");
    }
    else
    {
        printf("\nEnter data : ");
        scanf("%d", &newnode->data);
        if (position == 1)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            for (int i = 0; i < position - 2; i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        size++;
        printf("\n----Insertion at specific position complete---");
    }
}

void main()
{
    add(10);
    add(20);
    add(30);
    insert_at_specific_position();
    display();
}