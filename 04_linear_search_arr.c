/*
    1). We’ll start with coding the linear search. Create an integer function linearSearch. This function will receive the array, its size, and the element to be searched as its parameters.

    2). Run a for loop from its 0 to the last index, checking the if condition at every index whether the element at that index equals the search element. If yes, return the index, else continue the search.

    3). If the element could not be found until the last, return -1.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 34, 54, 64, 24, 53, 13, 66, 86, 36, 33, 55};
    int size = sizeof(arr) / sizeof(int);
    int element = 54;

    int searchIndex = linearSearch(arr, size, element);

    if(searchIndex == -1){
        printf("Element not found\n");
    }
    else{
        printf("The element %d was found at index %d \n", element, searchIndex);
    }

    return 0;
}