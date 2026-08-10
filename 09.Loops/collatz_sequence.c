#include <stdio.h>

int getcollazt_number()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}

void check_the_collazt_value(int n)
{
    int round = 1;

    while (n != 1)
    {
        printf("\nAfter Round %d\n", round);

        if (n % 2 == 0)
        {
            printf("The number is %d : It is Even, so %d/2 = %d\n",
                   n, n, n / 2);
            n = n / 2;
        }
        else
        {
            printf("The number is %d : It is Odd, so 3*%d+1 = %d\n",
                   n, n, 3 * n + 1);
            n = 3 * n + 1;
        }

        round++;
    }
}
void print_the_result(int n){
    printf("\nCollatz Conjecture completed.\n");
    printf("Final number = %d\n", n);
}
int main()
{
    int n = getcollazt_number();

    check_the_collazt_value(n);
    print_the_result(n);


    return 0;
}