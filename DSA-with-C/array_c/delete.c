#include<stdio.h>
int main()
{
    int size, i, index;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    for ( i = 0; i < size; i++)
    {
        printf("\nEnter the %d index no element of the array : ",i);
        scanf("%d",&array[i]);
    }

    printf("\nElements have entered : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
printf("\nEnter the index number of the element wnat to delete : ");
scanf("%d",&index);

for(i=index; i<size-1; i++)
{
    array[i]=array[i+1];
}
size--;
printf("\nElements after deletation : ");
for ( i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
printf("\n");
}