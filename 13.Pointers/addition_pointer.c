#include <stdio.h>
#include <stdlib.h>

int get_the_number(int *a, int *b)
{
    printf("Enter the value of a :");
    scanf("%d", &*a);

    printf("Enter the value of b :");
    scanf("%d", &*b);

    return 0;
}

void sum(int *a, int *b, int *add)
{
    *add = *a + *b;

}

int main()
{
    int a;
    int b;
    int add;

    get_the_number(&a, &b);     

    sum(&a, &b, &add);          

    printf("Sum = %d\n", add);

    return 0;
}