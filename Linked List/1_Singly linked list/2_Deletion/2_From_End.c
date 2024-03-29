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

void delete_from_end()
{
    struct node *previous_node;
    if (head==NULL)
    {
        printf("\nThe list is empty");
    }
    else
    {
        temp=head;
        while (temp->next!=NULL)
        {
            previous_node=temp;
            temp=temp->next;
        }
        free(temp);
        previous_node->next=NULL;

       printf("\n----Deletion from end complete---");
    }
}
void main()
{
    add(1);
    add(2);
    add(3);
    display();
    delete_from_end();
    display();
}