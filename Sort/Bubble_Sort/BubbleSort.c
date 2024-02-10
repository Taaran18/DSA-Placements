// Performing Bubble Sort in C

#include <stdio.h>

int main()
{
    // Initializing the size of the array.
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Initializing the array.
    int arr[n];

    // Taking input from the user.
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d elements: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing the unsorted array.
    printf("\nUnsorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Comparing each element with its adjacent element
    for (int i = 0; i < n - 1; i++)
    {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++)
        {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                // Swapping the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // Print array after each swap
                printf("\nArray after pass %d: ", i + 1);
                for (int k = 0; k < n; k++)
                {
                    printf("%d ", arr[k]);
                }
            }
        }
    }

    // Printing the sorted array.
    printf("\n\nSorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}