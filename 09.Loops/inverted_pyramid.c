#include <stdio.h>

int get_input_form_user()
{
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    return n;
}

void print_inverted_pyramid(int n)
{
    int i, j, s;

    for (i = n; i >= 1; i--)
    {
        // Print spaces
        for (s = 0; s < n - i; s++)
        {
            printf("  ");
        }

        // Print left half of stars
        for (j = i; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }

        // Print right half of stars
        for (j = 0; j < i - 1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

int main()
{
    int n;

    n = get_input_form_user();

    print_inverted_pyramid(n);

    return 0;
}