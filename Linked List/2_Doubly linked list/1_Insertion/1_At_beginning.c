#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *temp, *tail=NULL;
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
    newnode->prev=tail;
    tail = newnode;

}
void insert_at_beginning(int data)
{
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=head;
    head=newnode;
    newnode->prev=NULL;
    newnode->data=data;
    printf("\nAfter insert at beginning : ");
    display_list();
}
int main()
{
    intilize_list(20);
    insert_at_beginning();
}