#include <stdio.h>
#include <string.h>

void get_no_of_products(){

    int n;
    
    printf("Enter the number of products: ");
    scanf("%d", &n);
    
    char products[n][100];
} 
void get_the_products()
{    
        int n;
    char products[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter product %d: ", i + 1);
        scanf("%99s", products[i]);
    }
} 

void show_the_product()
{
            int n;
        char products[n][100];

    printf("\nProducts in your cart:\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, products[i]);
    }
}
void quality_of_the_product(){

        int n;
        char products[n][100];

    printf("\nQuantity  of each product name:\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%s = %zu\n", products[i], strlen(products[i]));
    }
}


int main()
{
    get_no_of_products();
    get_the_products();
    show_the_product();
    quality_of_the_product();


    return 0;
}