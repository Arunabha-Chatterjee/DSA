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

void delete_from_beginning()
{
    if (head==NULL)
    {
        printf("\nNo nodes are there in the list.\n");
    }
    else
    {
        temp=head;
        temp=temp->next;
        free(head);
        head=temp;
    }
    printf("\n----Deletion from Beginning complete---");
}

void main()
{
    add(1);
    add(2);
    add(3);
    display();
    delete_from_beginning();
    display();
}