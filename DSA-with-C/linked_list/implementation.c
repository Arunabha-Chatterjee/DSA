#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
int main()
{
    int size, i;
    struct node *temp, *start=NULL, *new_node;
    printf("How many node want to insert : ");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
    new_node=(struct node*)malloc(sizeof(struct node));
        if (start==NULL)
            {
                temp=start=new_node;
            }
        else
            {
            temp->next=new_node;
            temp=new_node;
            }

    printf("\nEnter data : ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    }

    //for print node.
    printf("Nodes have entered : ");
    temp=start;
    while (temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}
