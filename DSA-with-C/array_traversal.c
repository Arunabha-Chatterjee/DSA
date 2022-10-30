#include<stdio.h>
int main()
{
    int size, i;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    for ( i = 0; i < size; i++)
    {
        printf("\nEnter the %d index no element of the array : ",i);
        scanf("%d",&array[i]);
    }

    printf("\n Elements you have entered : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}