#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack [N];
int top=-1;

void display()
{
    int index=top;
    if (top==-1)
    {
    printf("\nThe stack is empty.");
        }
    else
    printf("\nThe stack elements are : ");
    {
        while (index!=-1)
        {
            printf("%d  ",stack[index]);
            index--;
            }
        
    }
}
void push(int data)
{
    if (top==N-1)
    {
        printf("\nThe stack is full.");
    }

    else{
        top++;
        stack[top]=data;
    } 
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("\nNo element is there.");
    }
    else{
        item=stack[top];
        top--;
        printf("Deleted element is : %d\n",item);
    }
}

void peak()
{
    if (top==-1)
    {
        printf("\nThe stack is empty.");
    }
    else{
        printf("\nThe top element is : %d\n",stack[top]);
    }
    
} 

int main()
{
    push(1);
    push(2);
    push(3);
    display();
    pop();
    peak();
    display();
}