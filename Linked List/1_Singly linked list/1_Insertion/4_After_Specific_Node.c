#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp, *tail;
int size = 0;
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

void insert_after_specific_node()
{
    printf("\nSize of the list : %d\n", size);
    temp = head;
    int position;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nInsert the position of the node after want to insert : ");
    scanf("%d", &position);
    if (head == NULL)
    {
        printf("\nThe list is empty.");
    }
    else if (position > size || position < 1)
    {
        printf("\nInvalid Position");
    }
    else
    {
        printf("\nEnter data : ");
        scanf("%d", &newnode->data);
        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        size++;
        printf("\n----Insertion after specific node complete---");
    }    
}

void main()
{
    add(1);
    add(2);
    add(3);
    insert_after_specific_node();
    display();
}