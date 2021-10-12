/*
    1). One thing which will remain as it is, is the display function.

    2). We have to make minimal changes in the insertion function to make it a deletion function. Rename it indDeletion. The index and the array, and its size will be our only parameters this time.

    3). Replace the right shift with the left shift. Just assign array[i], the value present in array[i+1].

    4). And we are done deleting the element at some specified index.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void display(int arr[], int n)
{

    // Traversaling of an array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1]; // Shifting array element to the left index to fill the void
    }
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 3;

    display(arr, size);
    indDeletion(arr, size, index);
    size--; // decreasing the size by 1

    display(arr, size);

    return 0;
}