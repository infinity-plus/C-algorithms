/*
 *  Below is a simple implementation of
 *  Linear Search in C using arrays
 */

#include <stdio.h>

int linearSearch(int *arr, int search, int max)
{
    int i;
    for(i = 0; i < max; i++)
        if(arr[i] == search)
            return i;
    return -1;
}

int main()
{
    int arr[100], n, found, search, i;

    printf("Enter number of elements (<100): ");
    scanf("%d", &n);
    printf("Enter a sorted integer array of %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to be searched: ");
    scanf("%d", &search);

    found = linearSearch(arr, search, n);
    if(found != -1)
        printf("Element found at %dth index", found+1);
    else
        printf("Element not found");
    return 0;
}
