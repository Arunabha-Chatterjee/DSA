#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *temp=NULL;

void display()
{
    temp=start;
    while (temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    
}

void add()
{
    printf("\n--------------Intilize nodes--------------");
    struct node *newnode;
    char choice='y';    
    while (choice=='y' || choice=='Y')
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if (start==NULL)
        {
            temp=start=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("\nEnter data : ");
        scanf("%d",&temp->data);
        temp->next=NULL;
        printf("\nWant to add another node ('y'/'Y'): ");
        scanf("\n%c",&choice);
    } 
    printf("\nNodes have enterd : ");
    display();
}


void insert_at_start()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next=start;
    start=newnode;
    printf("\nNodes after inset at start : ");
    display();
}

void insert_at_end()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp = start;
        while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    temp->next=newnode;
    newnode->next=NULL;
    printf("\nNodes after inset at end : ");
    display();
}

void insert_at_any()
{
    struct node *newnode;
    int pos, i;
    temp=start;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position : ");
    scanf("%d",&pos);
    if (pos==1)
    {
        insert_at_start();
        return;
    }
    
    for (i=1; i<pos-1; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    printf("\nNodes after inset : ");
    display();
}

int count_node()
{
    temp=start;
    int count=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("\nTotal node in the linked list : %d",count);
   return count; 
}

int main()
{

    int choice;
    add();
    printf("\n\nChoose any operation from below : ");
    printf("\n1.Insert at first.\n2.Insert at end.\n3.Insert at any position.\n4.Count");
    printf("\nWhich operation want to perform : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        insert_at_start();
        break;
    
    case 2:
        insert_at_end();
        break;
    case 3:
        insert_at_any();
        break;
    case 4:
        count_node();
    default:
        printf("\nEnter correct choice : ");

    }
    return 0;
}
