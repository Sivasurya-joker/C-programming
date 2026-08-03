#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    printf("Enter the number of products: ");
    scanf("%d", &n);

    char products[n][100];

    for (int i = 0; i < n; i++)
    {
        printf("Enter product %d: ", i + 1);
        scanf("%99s", products[i]);
    }

    printf("\nProducts in your cart:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, products[i]);
    }

    printf("\nQuantity  of each product name:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s = %zu\n", products[i], strlen(products[i]));
    }

    return 0;
}