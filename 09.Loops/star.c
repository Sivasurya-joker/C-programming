#include <stdio.h>

int get_input_for_star()
{
    int b;
    printf("Enter the star limit: ");
    scanf("%d", &b);
    return b;
}

void produce_stars(int b, int i)
{
    for (int j = b; j >= i; j--)
    {
        printf("*");
    }
    printf("\n");
}

void create_row_and_space(int b)
{
    for (int i = 0; i <= b; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf(" ");
        }

        produce_stars(b, i);
    }
}

int main()
{
    int b;

    b = get_input_for_star();

    create_row_and_space(b);

    return 0;
}
