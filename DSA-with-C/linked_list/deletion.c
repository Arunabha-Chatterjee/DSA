#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *temp=NULL;

void display()      // print nodes
{
    temp=start;
    while (temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    
}

void add()      // Intilize nodes
{
    printf("\n------------Intilize nodes------------");
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

int count_node()        // count
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

void delete_from_first()        //delete_from_first
{
    temp=start;
    start=temp->next;
    free(temp);
    printf("\nNodes (after delete from first) : ");
    display();
} 

void delete_from_end()      // delete_from_end
{
    temp=start;
   while (temp->next->next!=0)
   {
    temp=temp->next;
   }
   free(temp->next);
   temp->next=NULL;
   printf("\nNodes (after delete from end) : ");
   display();
}

void delete_from_any()      //delete from any position
{
    struct node *nextnode;
    int pos, i;
    temp=start;
    printf("\nEnter the position : ");
    scanf("%d",&pos);
    if (pos==1)
    {
        delete_from_first();
        return;
    }
    
    for ( i = 1; i < pos-1; i++)
    {
        temp=temp->next;
    }
    nextnode=temp->next->next;
    free(temp->next);
    temp->next=nextnode;
    printf("\nAfter delete : ");
    display();
}
void main()
{
    int choice;
    add();
    printf("\n\nChoose any operation from below : ");
    printf("\n1.Delete from first.\n2.Delete from end.\n3.Delete from any position.\n4.Count");
    printf("\nWhich operation want to perform : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        delete_from_first();
        break;
    
    case 2:
        delete_from_end();
        break;
    case 3:
        delete_from_any();
        break;
    case 4:
        count_node();
    default:
        printf("\nEnter correct choice : ");

    }
}
