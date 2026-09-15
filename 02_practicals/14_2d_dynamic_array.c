#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int **arr = NULL;

    printf("Enter the Size: ");
    scanf("%d", &size);

    // Typecase from (void *) to (int *)
    // Allocate memory for 'size' number of ROW POINTERS (int *)
    arr = (int **)malloc(size * sizeof(int *));

    if (arr == NULL)
    {
        printf("Memory allocation failed! Out of memory.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {

        // sizeof(int *) is like allocating space for a blank address book.
        // It doesn't hold the people (data); it only holds the directions on where to find them.

        // sizeof(int) is like allocating space for the actual houses where the people live.

        // Allocate memory for each individual row
        arr[i] = (int *)malloc(size * sizeof(int));

        if (arr[i] == NULL)
        {
            printf("Memory allocation failed for row %d!\n", i);
            return 1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter the value fo array[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n2D dynamic array:- \n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }

    // Free the memory in reverse order of allocation
    for (int i = 0; i < size; i++)
    {

        free(arr[i]); // Free each row first
    }

    free(arr); // Free the array of row pointers
    arr = NULL;

    return 0;
}

// or 

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int size;

//     printf("Enter the Size: ");
//     if (scanf("%d", &size) != 1 || size <= 0) return 1;

//     // Allocate a continuous 2D block using a pointer to a Variable-Length Array
//     int (*arr)[size] = malloc(size * sizeof(*arr));

//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     // Input elements
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             printf("Enter the value for array[%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]); // This syntax works here too!
//         }
//     }

//     // Print elements
//     printf("\n2D dynamic array:- \n");
//     for (int i = 0; i < size; i++) {
//         for (int j = 0; j < size; j++) {
//             printf("%3d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     // Freeing requires only one step because it's a single continuous block
//     free(arr);
//     return 0;
// }
