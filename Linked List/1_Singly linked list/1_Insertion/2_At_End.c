#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL, *temp, *tail;
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
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    if (head==NULL)
    {
        head=newnode;
    }
    else{
        tail->next=newnode;
    }
    newnode->next=NULL;
    tail=newnode;
}

void insert_at_end(int data)
{
    temp = head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    newnode->next = NULL;
    printf("\n----Insertion at End Complete---");
}
void main() 
{
    insert_at_end(50);
    insert_at_end(5);
    insert_at_end(500);
    display();
}
