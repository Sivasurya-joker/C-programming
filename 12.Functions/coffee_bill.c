#include <stdio.h>

// Function to calculate bill
float calculateBill(float price, int quantity)
{
    return price * quantity;
}

// Function to display bill
void displayBill(char name[], char coffee[], float price, int quantity)
{
    float total = calculateBill(price, quantity);

    printf("\n====== COFFEE BILL ======\n");
    printf("Customer Name : %s\n", name);
    printf("Coffee Type   : %s\n", coffee);
    printf("Price         : %.2f\n", price);
    printf("Quantity      : %d\n", quantity);
    printf("Total Bill    : %.2f\n", total);
    printf("=========================\n");
}

int main()
{
    char name[50];
    char coffee[50];
    float price;
    int quantity;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Coffee Type: ");
    scanf("%s", coffee);

    printf("Enter Coffee Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    displayBill(name, coffee, price, quantity);

    return 0;
}