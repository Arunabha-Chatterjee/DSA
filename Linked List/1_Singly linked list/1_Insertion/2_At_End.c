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
    struct node *node1, *node2, *node3;;
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
void insert_at_end()
{
    temp_node = head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        temp_node = head = newnode;
    }
    else
    {
        while (temp_node->next != NULL)
        {
            temp_node = temp_node->next;
        }
        temp_node->next = newnode;
    }
    printf("\nEnter data : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    size++;

    printf("\nNodes after insert at end : ");
    display_list();
    printf("\nSize of the list : %d\n",size);
}
void main()
{
    intilize_list();
    insert_at_end();
}
