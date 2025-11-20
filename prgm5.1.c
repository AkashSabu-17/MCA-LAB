#include <stdio.h>

//Read function
void read(int arr[], int n) {
    int i;
	printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

//Display function
void disp(int arr[], int n) {
    int i;
	printf("Array elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

//Sort Function
void sort(int arr[], int n) {
    int i,j;
	for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    read(arr, n);
    printf("\nBefore sorting:\n");
    disp(arr, n);
    sort(arr, n);
    printf("\nAfter sorting in ascending order:\n");
    disp(arr, n);

    return 0;
}

