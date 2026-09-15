
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multi(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    if (b != 0)
        return a / b;
    else
        return -1;
}

int main()
{
    int (*calculator[])(int, int) = {add, sub, multi, div};

    int a;
    printf("Enter the Initial value: ");
    scanf("%d", &a);

    int b;
    printf("Enter the Final value: ");
    scanf("%d", &b);

    printf("\nAddition result        : %d", calculator[0](a, b));
    printf("\nSubtraction result     : %d", calculator[1](a, b));
    printf("\nMultiplication result  : %d", calculator[2](a, b));
    printf("\nDivision result        : %d\n", calculator[3](a, b));

    return 0;
}

