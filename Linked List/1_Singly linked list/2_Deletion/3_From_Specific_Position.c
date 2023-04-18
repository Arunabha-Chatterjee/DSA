#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *tail;
int size=0;
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
    tail = newnode;
    size++;
}

void delete_from_specific_position()
{
    printf("\nSize of the list : %d", size);
    if (head==NULL)
    {
        printf("\nThe list is empty.");
    }

    else
    {
        temp=head;
        struct node *prev_node;
        int position;
        printf("\nEnter position : ");
        scanf("%d",&position);
        if (position>size || position<1)
        {
            printf("Invalid Position");
        }
        else if (position==1)
        {
            temp=temp->next;
            free(head);
            head=temp;
        }
        else
        {
            for (int i = 0; i<position-1; i++)
            {
                prev_node=temp;
                temp=temp->next;
            }
            prev_node->next=temp->next;
            free(temp);
            size--;
            printf("\n----Deletion from specific position complete---");    
        }
    }
    
}
void main()
{
    add(1);
    add(2);
    add(3);
    delete_from_specific_position();
    display();
}