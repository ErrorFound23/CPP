#include <stdio.h>

int main()
{

    int number = 23;
    int *ptr;

    ptr = &number;

    printf("Basic Concept of Pointer:- \n\n");
    printf("Value of number variable: %d\n", number);
    printf("Address of number variable: %u\n", &number);

    // The use of (void*) is called a typecast. It temporarily converts the type of the pointer (which is an int* or integer pointer) into a generic pointer type (void*) specifically for the printf function.

    // The C standard explicitly states that the %p format specifier in printf expects a generic pointer (void*).
    // printf("Address of Number variable: %p\n", (void *)&number);

    printf("\nValue of ptr variable: %u\n", ptr);
    printf("Address of ptr variable: %u\n", &ptr);
    printf("Value at address(as a value) store by ptr variable: %d\n", *ptr);

    printf("\nModify value via Pointer:- \n\n");
    *ptr = 32;

    printf("New value of number variable: %d\n", number);
    printf("New value at address(as a value) store by ptr variable: %d\n", *ptr);

    return 0;
}