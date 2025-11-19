// A menu-driven array program with local variables @ Akash Sabu 28/07/2025

#include <stdio.h>

// Insert element into array
void insert(int a[], int *pos, int e)
{
    if (*pos + 1 == 5)
    {
        printf("Error: Array is full.\n");
    } else
    {
        a[++(*pos)] = e;
        printf("Inserted %d successfully.\n", e);
    }
}

// Delete element from specific position

void deleteElement(int a[], int *pos)
{
    int i=0;
	if (*pos == -1) 
    {
        printf("Error: Array is empty.\n");
    } else
    {
        int delPos;
        printf("Enter position to delete (0 to %d): ", *pos);
        scanf("%d", &delPos);

        if (delPos < 0 || delPos > *pos) 
        {
            printf("Invalid position.\n");
            return;
        }

        printf("Deleted element: %d\n", a[delPos]);

        for (i = delPos; i < *pos; i++)
        {
            a[i] = a[i + 1];
        }

        (*pos)--;
    }
}

// Display the array

void display(int a[], int pos) 
{
    int i=0;
	if (pos == -1) 
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements:\n");
    for (i = 0; i <= pos; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

// Searching for an element
void search(int a[], int pos, int e)
{
    int i=0,found = 0;
    for (i = 0; i <= pos; i++) 
    {
        if (a[i] == e) 
        {
            printf("Element %d found at position %d.\n", e, i);
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        printf("Element %d not found in the array.\n", e);
    }
}
void sortArray(int a[], int pos)
{
    int i=0,j=0;
	if (pos == -1)
    {
        printf("Array is empty. Nothing to sort.\n");
        return;
    }

    for (i = 0; i < pos; i++) 
    {
        for (j = 0; j < pos - i; j++) 
        {
            if (a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Array has been sorted in ascending order.\n");
}

// Menu function

int menu() {
    int ch;
    printf("\n Menu \n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Search\n");
    printf("5. Sort\n");
    printf("6.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}


void processArray() 
{
    int a[5];      
    int pos = -1;  
    int ch;

    for (ch = menu(); ch != 6; ch = menu()) {
        switch (ch) 
        {
            case 1:
            {
                int num;
                printf("Enter number to insert: ");
                scanf("%d", &num);
                insert(a, &pos, num);
                break;
            }
            case 2:
                deleteElement(a, &pos);
                break;
            case 3:
                display(a, pos);
                break;
            case 4:
            {
                int num;
                printf("Enter number to search: ");
                scanf("%d", &num);
                search(a, pos, num);
                break;
            }
            case 5:
                sortArray(a, pos);
                break; 
            default:
                printf("Error: Invalid choice.\n");
                break;
        }
    }
}

// Main function
int main()
{
    processArray();
    return 0;
}
