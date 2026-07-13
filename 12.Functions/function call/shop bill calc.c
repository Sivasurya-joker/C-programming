#include <stdio.h>

// Function to calculate the total bill
float billCalculator(float price, float quantity)
{
    float total = price * quantity;   // Calculate the total bill
    return total;                     // Return the total bill
}

int main()
{
    char itemName[100];
    float price, quantity;            // Declare the required variables

    printf("Enter the item name:\n");
    scanf("%s", itemName);            // Get the item name

    printf("Enter the price of the item:\n");
    scanf("%f", &price);              // Get the price of the item

    printf("Enter the quantity of the item:\n");
    scanf("%f", &quantity);           // Get the quantity of the item

    // Call the function to calculate the total bill
    float total = billCalculator(price, quantity);

    printf("\nItem Name : %s\n", itemName);
    printf("Your bill is: %.2f\n", total);  // Display the bill amount

    return 0;                       
}