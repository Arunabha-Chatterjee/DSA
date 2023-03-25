#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,  *temp, *t;
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
        
    }
}

void intilize_list()
{
    int count;
    printf("Enter how many node want to insert : ");   ;
    scanf("%d",&count);
    if (count==0)
    {
        printf("\nNo node inserted.");
    }

    else
    {
        for (int i = 1; i < count+1; i++)
        {
            struct node *newnode;
            newnode=(struct node *)malloc(sizeof(struct node));
            printf("Enter %d no node data : ",i);
            scanf("%d",&newnode->data);
        if (head==NULL)
        {
            newnode->prev=NULL;
            t=head=newnode;
        }
        else
        {
            t->next=newnode;
            newnode->prev=t;
            t=newnode;
        }
        newnode->next=NULL;
        }
        printf("\nNodes after intilization : ");
        display_list();
        printf("\nSize of the list : %d",size);
    }
}


int main()
{
    intilize_list();
    intilize_list();
}