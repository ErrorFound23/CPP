#include <stdio.h>

void generateCircularMatrix(int n)
{
    int matrix[n][n], value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right)
    {

        // left to right
        for (int i = left; i <= right; i++)
        {
            matrix[top][i] = value++;
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            matrix[i][right] = value++;
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                matrix[bottom][i] = value++;
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                matrix[i][left] = value++;
            }
            left++;
        }
    }

    printf("\nCircular Matrix: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the size: ");

    // What scanf returns
    // Most people think scanf just takes input, but it actually returns an integer representing the count of successfully matched and assigned values.
    // If you ask for one integer (%d) and the user types a number (like 4), scanf successfully matches it and returns 1.
    // If the user types letters instead (like abc), scanf fails to match the integer format and returns 0.
    // If the input stream ends unexpectedly or there is a system error before any data is read, it returns a special constant called EOF (usually -1).

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    generateCircularMatrix(n);

    return 0;
}