//Searching for all the occurances of an element @ Akash Sabu 28/07/2025

#include <stdio.h>

int Occurrence(int arr[], int size, int key) 
{
    int i=0,found = 0,occ=0;
    for (i = 0; i < size; i++) 
    {
        if (arr[i] == key) 
        {
            printf("Found at position : %d\n", i);
            found = 1;
            occ++;
        }
    }

    if (!found) 
    {
        printf("Element %d not found in the array.\n", key);
    }
    return occ;
}

int main()
{
    int arr[100], n, key,i=0, occ;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    Occurrence(arr, n, key);
    printf("The occurance:%d",occ);

    return 0;
}
