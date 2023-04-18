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

int main()
{
    display();
    add(2);
    add(3);
    add(4);
    display();
    return 0;
}
