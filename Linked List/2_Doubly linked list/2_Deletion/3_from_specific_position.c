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
        printf("\nThe list is empty.");
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

void delete_from_specific_position()
{
    int position;
    temp=head;
    printf("Emter position : ");
    scanf("%d",&position);
    if (head==0)
    {
        printf("\nThe list is empty.");
    }
    else if (position>size || position<1)
    {
        printf("\nInvalid Position\n");
    }
    else{
    for (int i = 0; i < position-1; i++)
    {
        temp=temp->next;
    }

    if (temp->next!=0)
    {
        temp->next->prev=temp->prev;
    }
    if (temp->prev!=0)
    {
        temp->prev->next=temp->next;
    }
    if(temp==head && temp->next!=0)
    {
        head=temp->next;
    } 
    free(temp);
    size--;
    printf("After delete : ");
    display_list();
    }
}

void main()
{
    intilize_list();
    delete_from_specific_position();
}