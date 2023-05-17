// WAP which is menu driven with
// 1- Inserting the element
// 2- Display the element
// 3- searching the element
// 4- display in descending order
// 5- number of even number
// 6- Insert at specific position
// 7- Deleting the specific positional value
// 8- Retrive the even number of element from the array and store it into 2nd array.
// 9- Copy the elements of an array to another array
// 10- Find the duplicate elements in an array
// use array, switch case , for , do-while concepts in C to implement this , make the size of array as 10.

#include <stdio.h>

int main()
{
    int arr[100], size = 0;
    int choice, element, position, i;

    do
    {
        // display menu
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Display the elements\n");
        printf("3. Search for an element\n");
        printf("4. Display in descending order\n");
        printf("5. Number of even elements\n");
        printf("6. Insert at specific position\n");
        printf("7. Delete at specific position\n");
        printf("8. Retrieve even elements and store in another array\n");
        printf("9. Copy elements to another array\n");
        printf("10. Find duplicate elements\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");

        // read user choice
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // insert element
            if (size >= 100)
            {
                printf("Array is full, cannot insert.\n");
            }
            else
            {
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                arr[size] = element;
                size++;
            }
            break;

        case 2:
            // display elements
            printf("Elements: ");
            for (i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 3:
            // search for element
            printf("Enter the element to search: ");
            scanf("%d", &element);
            for (i = 0; i < size; i++)
            {
                if (arr[i] == element)
                {
                    printf("Element found at position %d.\n", i);
                    break;
                }
            }
            if (i == size)
            {
                printf("Element not found.\n");
            }
            break;

        case 4:
            // display in descending order
            printf("Elements in descending order: ");
            for (i = size - 1; i >= 0; i--)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        case 5:
            // count even elements
            int even_count = 0;
            for (i = 0; i < size; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    even_count++;
                }
            }
            printf("Number of even elements: %d\n", even_count);
            break;

        case 6:
            // insert at specific position
            if (size >= 100)
            {
                printf("Array is full, cannot insert.\n");
            }
            else
            {
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                if (position < 0 || position > size)
                {
                    printf("Invalid position.\n");
                }
                else
                {
                    for (i = size; i > position; i--)
                    {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = element;
                    size++;
                }
            }
            break;

        case 7:
            // delete at specific position
            printf("Enter the position to delete: ");
            scanf("%d", &position);
            if (position < 0 || position >= size)
            {
                printf("Invalid position.\n");
            }
            else
            {
                for (i = position + 1; i < size; i++)
                {
                    arr[i - 1] = arr[i];
                }
                size--; // decrement size
                printf("Element deleted.\n");
            }
            break;

        case 8:
            // retrieve even elements and store in another array
            int even_arr[100], even_size = 0;
            for (i = 0; i < size; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    even_arr[even_size] = arr[i];
                    even_size++;
                }
            }
            printf("Even elements: ");
            for (i = 0; i < even_size; i++)
            {
                printf("%d ", even_arr[i]);
            }
            printf("\n");
            break;

        case 9:
            // copy elements to another array
            int copy_arr[100], copy_size = size;
            for (i = 0; i < size; i++)
            {
                copy_arr[i] = arr[i];
            }
            printf("Elements copied to new array.\n");
            break;

        case 10:
            // find duplicate elements
            for (i = 0; i < size; i++)
            {
                for (int j = i + 1; j < size; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        printf("Duplicate element: %d\n", arr[i]);
                    }
                }
            }
            break;

        case 11:
            // exit program
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice, please try again.\n");
            break;
        }
    } while (choice != 11);

    return 0;
}
