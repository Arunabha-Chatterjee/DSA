#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,  *temp;
int size=0;
void display_list()
{
    temp=head;
    if (head==NULL)
    {
        printf("The list is empty.");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d  ", temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void intilize_list()
{
    temp=head;
    int count, i;
    printf("\nEnter how many node want to insert : ");
    scanf("%d",&count);
    for ( i = 1; i < count+1; i++)
    {
        struct node* newnode=(struct node *)malloc(sizeof(struct node)); //intilize memory for new node
        printf("\nEnter node %d.no node : ",i);
        scanf("%d",&newnode->data); //take input how many node want to insert
        if (head==NULL) //if list is empty
        {
            temp=head=newnode;
            newnode->prev=NULL;
        }
        else //if list is not empty
        {
            temp->next=newnode;
            newnode->prev=temp;
        }
        newnode->next=NULL;
        temp=newnode;
        size++;
    }
    
    printf("\nNodes : ");
    display_list();
}

void insert_at_end()
{
    temp=head;
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    if (head==NULL)
        {
            temp=head=newnode;        
            newnode->prev=NULL;
        }
    else
    {
        while (temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
    newnode->next=NULL;
    printf("\nAfter inset at end : ");
    display_list();
}
void main()
{
    intilize_list();
    insert_at_end();
}