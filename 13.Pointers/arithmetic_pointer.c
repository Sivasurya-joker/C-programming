#include <stdio.h>
#include <stdlib.h>

void get_the_number(int *n)
{
    printf("Enter the number for arithmetic operation in pointer:\n");
    scanf("%d", n);
}

void print_the_value(int *n, int **arithmatic_operations)
{
    printf("n = %d\n", *n);

    printf("arithmatic_operations = %p\n",
           (void *)*arithmatic_operations);

    (*arithmatic_operations)++;

    printf("arithmatic_operations++ = %p\n",
           (void *)*arithmatic_operations);

    (*arithmatic_operations)--;
}

int main()
{
    int n;

    int *arithmatic_operations = &n;

    get_the_number(&n);

    print_the_value(&n, &arithmatic_operations);

    return 0;
}