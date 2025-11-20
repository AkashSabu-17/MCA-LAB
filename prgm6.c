//  Display the array elements using recursive function @ Akash Sabu 28/07/2025

#include <stdio.h>

// Recursive function to display array elements
void displayArray(int arr[], int index, int size) {
    if (index == size) {
        return;
    }

    printf("%d ", arr[index]);
    displayArray(arr, index + 1, size);
}

int main() {
    int size,i=0;

    // Ask user for size of array
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Read elements from user
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements using recursion
    printf("Array elements:\n");
    displayArray(arr, 0, size);

    return 0;
}
