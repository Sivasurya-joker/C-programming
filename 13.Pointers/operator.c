//Demonstration of the & operator in C
#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a; // Using the & operator to get the address of variable
    printf("Value of a: %d\n", a);

    printf("Address of a: %p\n", (void*)&a);

    printf("Value stored in ptr (address of a): %p\n", (void*)ptr);
    
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereferencing the pointer to get the value of a
    return 0;
}