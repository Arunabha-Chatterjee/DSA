#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int size, i;
    struct node *temp, *start = NULL, *new_node;
    printf("How many node want to insert : ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        if (start == NULL)
        {
            temp = start = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }

        printf("\nEnter data : ");
        scanf("%d", &temp->data);
        temp->next = NULL;
    }

    // print node before insertion.

    printf("Nodes before insertion : ");
    temp = start;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // insertion at begining

    printf("\n\nNode insertion.");
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&new_node->data);
    new_node->next=start; 
    start=new_node;
    
    //print nodes after insertion

    printf("\nNodes after insertion : ");
    temp = start;
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
