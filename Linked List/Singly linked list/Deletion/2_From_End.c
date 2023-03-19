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

void delete_from_end()
{
    struct node *previous_node;
    if (head==NULL)
    {
        printf("\nThe list is empty");
    }
    else
    {
        temp_node=head;
        while (temp_node->next!=NULL)
        {
            previous_node=temp_node;
            temp_node=temp_node->next;
        }
        free(temp_node);
        previous_node->next=NULL;
        size--;

        printf("\nNodes after delete from end : ");
        display_list();
        printf("\nSize of the list : %d\n",size);
    }
}
void main()
{
    intilize_list();
    delete_from_end();
}