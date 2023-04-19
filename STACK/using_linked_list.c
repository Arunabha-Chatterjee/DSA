#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *temp, *top=NULL;

void display()
{
    temp=top;
    if (top==NULL)
    {
        printf("\nThe stack is empty.");
    }
    else{
        printf("\nThe elements are : ");
        while (temp!=NULL)
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
                
    }
    
}

void push(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void pop()
{
    temp=top;
    if (top==NULL)
    {
        printf("\nThe stack is empty.");
    }
    else{
        top=top->next;
        free(temp);
    }
}

void peak()
{
    if (top==NULL)
    {
        printf("\nThe stack is empty.");
    }

    else{
        printf("\nThe peak element is %d",top->data);
    }

}
int main()
{
    push(1);
    push(2);
    push(3);
    display();
}