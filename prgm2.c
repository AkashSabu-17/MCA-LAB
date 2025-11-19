// A menu-driven for performing array operations @ Akash Sabu 28/07/2025
  
#include <stdio.h>

int a[5];       // Size of array
int pos = -1;   // Position 


void insert(int e) // Inserting element 
{
    if (pos + 1 == 5) 
    {
        printf("Error: Array is full.\n");
    }
    else 
    {
        a[++pos] = e;
        printf("Inserted %d successfully.\n", e);
    }
}


void deleteElement() // Deleting element
{
    int i=0;
	if (pos == -1) 
    {
        printf("Error: Array is empty.\n");
    } 
    else 
    {
        int delPos;
        printf("Enter position to delete (0 to %d): ", pos);
        scanf("%d", &delPos);

        if (delPos < 0 || delPos > pos) 
        {
            printf("Invalid position.\n");
            return;
        }

        printf("Deleted element: %d\n", a[delPos]);

        for( i = delPos; i < pos; i++) 
        {
            a[i] = a[i + 1];
        }

        pos--;
    }
}


void display() // Display the array
{
    int i=0;
	if (pos == -1) 
    {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements:\n");
    for( i = 0; i <= pos; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}


void search(int e)  // Searching for the element
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

void sortArray() // Sorting
{
    int i=0,j=0;
	if (pos == -1) 
    {
        printf("Array is empty. Nothing to sort.\n");
        return;
    }

    for (i = 0; i <= pos - 1; i++) 
    {
        for (j = 0; j <= pos - i - 1; j++)
        {
            if (a[j] > a[j + 1]) 
            {
                // Swap
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Array has been sorted in ascending order.\n");
}

// Menu function
int menu()
{
    int ch;
    printf("\n Menu \n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Display\n");
    printf("4. Search\n");
    printf("5. Sort\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}

void processArray() {
    int ch;
    for (ch = menu(); ch != 6; ch = menu()) {
        switch (ch) {
            case 1: 
            {
                int num;
                printf("Enter number to insert: ");
                scanf("%d", &num);
                insert(num);
                break;
            }
            case 2:
                deleteElement();
                break;
            case 3:
                display();
                break;
            case 4:
            {
                int num;
                printf("Enter number to search: ");
                scanf("%d", &num);
                search(num);
                break;
            }
            case 5:
                sortArray();  
                break;
                
            default:
                printf("Error: Invalid choice.\n");
                break;
        }
    }
}


int main() // Main function
{
    processArray();
    return 0;
}


