#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *tail;
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
}

void insert_at_beginning(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next = head;
    head = newnode;
    printf("\n----Insertion at Beginning complete---");
}

void main()
{

    display();
    add(1);
    add(2);
    add(3);
    add(4);
    insert_at_beginning(5);
    display();
}
