#include <stdio.h>
int main()
{
    int size, i, new_element, index;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int array[size];
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the %d index no element of the array : ", i);
        scanf("%d", &array[i]);
    }

    printf("\n Elements have entered : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // insertion

    printf("\nEnter the element : ");
    scanf("%d", &new_element);
    printf("\nEnter index no want to insert : ");
    scanf("%d", &index);
    size++;
    for (i = size; i > index; i--)
    {
        array[i] = array[i - 1];
    }
    array[index] = new_element;
    printf("\nArray elements after inserting a array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}