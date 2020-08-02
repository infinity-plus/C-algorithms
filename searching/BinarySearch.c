/*
 *  Below is a simple implementation of
 *  Binary Search in C using arrays
 */

#include <stdio.h>

int binarySearch(int* arr, int search, int high)
{
    int low = 0, flag = 0, mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if( arr[mid] == search)
        {
            flag = 1;
            break;
        }
        else if(search < mid)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if(flag == 1)
        return mid;
    else
        return -1;
}

int main()
{
    int arr[100], n, i, search, found;
    printf("Enter number of elements (<100): ");
    scanf("%d", &n);
    printf("Enter a sorted integer array of %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to be searched: ");
    scanf("%d", &search);

    found = binarySearch(arr, search, n-1);
    if(found != -1)
        printf("Element found at %dth index", found+1);
    else
        printf("Element not found");
}
