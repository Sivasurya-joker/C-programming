#include <stdio.h>

int main()
{
    char item_name[1000];
    int item_number;
    int item_price;

    char *product_name;
    int *product_number;
    int *product_price;

    product_name = item_name;
    product_number = &item_number;
    product_price = &item_price;

    printf("Name address   : %p\n", (void *)product_name);
    printf("Number address : %p\n", (void *)product_number);
    printf("Price address  : %p\n", (void *)product_price);

    return 0;
}