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
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));

    head = node1;
    node1->data = 10;
    node1->next = node2;
    size++;

    node2->data = 20;
    node2->next = node3;
    size++;

    node3->data = 30;
    node3->next = NULL;
    size++;
    printf("\nTotal nodes : ");
    display_list();
    printf("\nSize of the list : %d", size);
}

void delete_after_specific_node()
{
    struct node *previous_node;
    temp_node = head;
    int position;
    printf("\nEnter the position : ");
    scanf("%d", &position);
    if (head == NULL)
    {
        printf("\nThe node is empty.");
    }
    else if (position > size - 1 || position < 0)
    {
        printf("Invalid position\n");
    }
    else
    {
        for (int i = 0; i < position; i++)
        {
            previous_node = temp_node;
            temp_node = temp_node->next;
        }
        previous_node->next = temp_node->next;
        free(temp_node);
        size--;
        printf("\nAfter delete nodes : ");
        display_list();
        printf("\nSize of the list : %d\n", size);
    }
}
void main()
{
    intilize_list();
    delete_after_specific_node();
}