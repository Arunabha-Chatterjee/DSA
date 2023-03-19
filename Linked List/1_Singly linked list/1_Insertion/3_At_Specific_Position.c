#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp_node;
int size;

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
    struct node *node1, *node2, *node3;
    node1=(struct node *)malloc(sizeof(struct node));
    node2=(struct node *)malloc(sizeof(struct node));
    node3=(struct node *)malloc(sizeof(struct node));

    head=node1;
    node1->data=10;
    node1->next=node2;
    size++;

    node2->data=20;
    node2->next=node3;
    size++;

    node3->data=30;
    node3->next=NULL;
    size++;

    printf("\nTotal nodes : ");
    display_list();
    printf("\nSize of the list : %d",size);
}
void insert_at_specific_position()
{
    temp_node = head;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    int position;
    printf("\nEnter position : ");
    scanf("%d", &position);
    if (head == NULL && position != 1)
    {
        printf("\nEmpty list");
    }
    else if (position > size + 1 || position < 1)
    {
        printf("Invalid position.");
    }
    else
    {
        if (position == 1)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            for (int i = 0; i < position - 2; i++)
            {
                temp_node = temp_node->next;
            }
            newnode->next = temp_node->next;
            temp_node->next = newnode;
        }
        printf("\nEnter data : ");
        scanf("%d", &newnode->data);
        size++;
    }
    printf("\nNodes after insert specific position : ");
    display_list();
    printf("\nSize of the list : %d\n",size);
}

void main()
{
    intilize_list();
    insert_at_specific_position();
}