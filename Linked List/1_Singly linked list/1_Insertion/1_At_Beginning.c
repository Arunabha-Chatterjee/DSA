#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp_node;

void display_list()
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
    }
    else
    {
        temp_node = head;
        while (temp_node != NULL)
        {
            printf("%d  ", temp_node->data);
            temp_node = temp_node->next;
        }
    }
}

void intilize_list()
{
    int count;
    printf("\nEnter how many node want to insert : ");
    scanf("%d", &count);
    if (count == 0)
    {
        printf("\nThe list is empty.");
    }
    else
    {
        temp_node=head;
        for (int i = 0; i < count; i++)
        {
            struct node *newnode=(struct node *)malloc(sizeof(struct node));
            printf("\nEnter data : ");
            scanf("%d",&newnode->data);
            if (head == 0)
            {
                head=newnode;
            }
            else
            {
                temp_node->next=newnode;
                temp_node=newnode;
            }
            newnode->next=0;    
        }
    }
}

void insert_at_beginning()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    // size++;
    printf("\nNodes after insert at beginning : ");
    display_list();
    // printf("\nSize of the list : %d\n",size);
}

void main()
{
    intilize_list();
}
