#include <stdio.h>

int fibo(int n, int *f1, int *f2, int *f3)
{
    // printf("%d", *f1);
    for (int i = 1; i <= n; i++)
    {

        printf("%d\t", *f1);
        *f3 = *f1 + *f2;
        *f1 = *f2;
        *f2 = *f3;
    }
}

// The "identifier undefined" error for f1, f2, and f3 happens because your code uses C++ references (&), but your compiler is treating the code as a pure C program.
// void fibo2(int n, int &f1, int &f2, int &f3)
// {
//     // printf("%d", *f1);
//     for (int i = 1; i <= n; i++)
//     {

//         printf("%d\t", f1);
//         f3 = f1 + f2;
//         f1 = f2;
//         f2 = f3;
//     }
// }

int fibo3(int n)
{
    int f1 = 0, f2 = 1, f3;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", f1);
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f1;
}

int main()
{
    int f1 = 0, f2 = 1, f3, n;

    printf("Enter the Number: ");
    scanf("%d", &n);

    // fibo(n, &f1, &f2, &f3);
    // fibo2(n, f1, f2, f3);
    fibo3(n);

    return 0;
}