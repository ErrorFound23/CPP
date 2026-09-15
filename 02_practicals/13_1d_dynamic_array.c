#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int *arr = NULL;

    printf("Enter the size: ");
    scanf("%d", &size);

    // printf("%d\t", arr[0]);
    // printf("%d\t", arr[1]);
    // printf("%d\t", arr[2]);
    // printf("%d\t", arr[3]);
    // printf("%d\t", arr[4]);

    // size * sizeof(int) (The Request)
    // sizeof(int) checks how many bytes a single integer takes up on your computer (typically 4 bytes).
    // If size is 5, then 5 * 4 = 20. You are asking malloc for a contiguous block of 20 bytes of raw memory.
    
    // malloc(...) (The Allocation)
    // malloc goes out to the system RAM, searches for a free 20-byte block, reserves it so no other program can use it, and returns a generic pointer (void *) pointing to the very first byte of that block.
    
    // (int *) (The Typecast)
    // Because malloc returns a generic pointer, the (int *) tells the compiler: "Treat this raw block of memory as a collection of integers."
    // Now, your pointer arr can use brackets (arr[0], arr[1], etc.) to jump exactly 4 bytes at a time to read and write integers.

    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed! Out of memory.\n");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of array[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n1D dynamic array:- \n");

    for (int i = 0; i < size; i++)
    {

        printf("%d\t", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}