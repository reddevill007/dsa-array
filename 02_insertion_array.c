/*
    1). We will start by declaring an array arr of length 100. Initialize this array with some 4-5 elements. This will be our used memory. 

    2). We’ll create a void display function using the method of traversal. Pass this array to the display function by value or by reference. And print the elements. Printing the elements of an array has already been covered in my C playlist. Visit now if you haven’t yet.

    3). We’ll now create an integer function indInsertion (integer, just to check if the operation succeeds). Before that, create an integer variable size to store the used size of the array. Pass into this void function the array and its used size, the element to be inserted and the total size, and the index where it is inserted.

    4). indInsertion(arr, size, element, 100, index);

    5). In the indInsertion function, write the case of validity. Here, we’ll check if the index is within the range [0,100]. We’ll continue if it's valid; otherwise, return -1.

    6). Create a for loop to shift the elements from the index to the last element to their adjacent right. This way, we’ll create a void at the index we want to insert in.

    7). Insert the element in the index. Return 1 on completion.
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

int indInsertion(int arr[], int size, int element, int capacity, int index)
{

    // if size is grater then the capacity of array then insertion will fail and program will return -1
    if (size >= capacity)
    {
        return -1;
    }

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i]; // Shifting array element to the right index to make space
    }

    arr[index] = element; // Inserting element

    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3, capacity = 100;

    display(arr, size);
    int result = indInsertion(arr, size, element, capacity, index);
    size++; // increasing the size by 1
    
    if (result == 1)
    {
        display(arr, size);
    }

    else
    {
        printf("Element was not inserted\n");
    }

    return 0;
}