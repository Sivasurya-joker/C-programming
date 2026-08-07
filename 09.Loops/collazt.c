#include <stdio.h>

int getcollazt()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    return n;
}

void check(int n)
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

    printf("\nCollatz Conjecture completed.\n");
    printf("Final number = %d\n", n);
}

int main()
{
    int n = getcollazt();

    check(n);

    return 0;
}