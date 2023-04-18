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

void delete_after_specific_node()
{
    printf("\nSize of the list : %d", size);
    struct node *previous_node;
    temp = head;
    int position;
    printf("\nEnter the position : ");
    scanf("%d", &position);
    if (head == NULL)
    {
        printf("\nThe node is empty.");
    }
    else if (position > size - 1 || position <= 0)
    {
        printf("Invalid position\n");
    }
    else
    {
        for (int i = 0; i < position; i++)
        {
            previous_node = temp;
            temp = temp->next;
        }
        previous_node->next = temp->next;
        free(temp);
        size--;
        printf("\n----Deletion after specific node complete---");    

    }
}
void main()
{
    add(1);
    add(2);
    add(3);
    delete_after_specific_node();
    display();
}