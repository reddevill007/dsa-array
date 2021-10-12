/*
    1. Create a function named binarySearch and pass the same three parameters as we did in linear search. Here, we will maintain three integer variables low, mid, and high. Low  stores are the beginning of the search space, and high stores the end. Mid stores the middle element of our search space, which is   mid = (low+high)/2.

    2. Check whether the mid element equals the search element. If yes, return mid, else if the mid element is greater than the search element, then the search element must lie on the left side of the current space and high becomes mid-1, else if the mid element is less than the search element, then we’ll shift to the right side, and low becomes mid+1.

    3. This way, we reduce our search space into half every time we repeat step 2. Now our new mid becomes (low+high)/2, and we repeat step 2. And keep repeating until either we find the search element or the low becomes greater than the high.
*/

int binarySearch(int arr[], int size, int element)
{
    int low = 0, mid, high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // search end
    return -1;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    int element = 12;

    int searchIndex = binarySearch(arr, size, element);

    if(searchIndex == -1){
        printf("Element not found\n");
    }
    else{
        printf("The element %d was found at index %d \n", element, searchIndex);
    }

    return 0;
}