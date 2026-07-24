#include<stdio.h>

void Menu()
{
    printf("********************** MENU **********************\n");

    printf("\nCoffee:\n");
    printf("1.Americano\n");
    printf("2.Breve\n");
    printf("3.Cappuccino\n");
    printf("4.Doppio\n");
    printf("5.Espresso\n");
    printf("6.Filter Coffee\n");
    printf("7.Galao\n");
    printf("8.Honey Latte\n");
    printf("9.Iced Coffee\n");
    printf("10.Java Coffee\n");

    printf("\nSavouries:\n");
    printf("1.Croissant\n");
    printf("2.Sandwich\n");
    printf("3.Wrap\n");
    printf("4.Garlic Bread\n");
    printf("5.Pizza Slice\n");
    printf("6.Puff\n");
    printf("7.French Fries\n");
    printf("8.Veg Cutlet\n");
    printf("9.Momos\n");
    printf("10.Pasta\n");
}

int Coffee()
{
    int coffee, price = 0;

    printf("\nCoffee (1-10): ");
    scanf("%d",&coffee);

    switch(coffee)
    {
        case 1: printf("Americano : Rs.10\n"); price=10; break;
        case 2: printf("Breve : Rs.20\n"); price=20; break;
        case 3: printf("Cappuccino : Rs.15\n"); price=15; break;
        case 4: printf("Doppio : Rs.25\n"); price=25; break;
        case 5: printf("Espresso : Rs.20\n"); price=20; break;
        case 6: printf("Filter Coffee : Rs.25\n"); price=25; break;
        case 7: printf("Galao : Rs.30\n"); price=30; break;
        case 8: printf("Honey Latte : Rs.35\n"); price=35; break;
        case 9: printf("Iced Coffee : Rs.25\n"); price=25; break;
        case 10: printf("Java Coffee : Rs.15\n"); price=15; break;
        default:
            printf("Invalid Choice\n");
            price = 0;
    }

    return price;
}

int Savouries()
{
    int snacks, price = 0;

    printf("\nSavouries (1-10): ");
    scanf("%d",&snacks);

    switch(snacks)
    {
        case 1: printf("Croissant - Rs.220\n"); price=220; break;
        case 2: printf("Sandwich - Rs.350\n"); price=350; break;
        case 3: printf("Wrap - Rs.360\n"); price=360; break;
        case 4: printf("Garlic Bread - Rs.220\n"); price=220; break;
        case 5: printf("Pizza Slice - Rs.320\n"); price=320; break;
        case 6: printf("Puff - Rs.200\n"); price=200; break;
        case 7: printf("French Fries - Rs.180\n"); price=180; break;
        case 8: printf("Veg Cutlet - Rs.240\n"); price=240; break;
        case 9: printf("Momos - Rs.250\n"); price=250; break;
        case 10: printf("Pasta - Rs.380\n"); price=380; break;
        default:
            printf("Invalid Choice\n");
            price = 0;
    }

    return price;
}

int main()
{
    int Coffeeprice, Snackprice, Total;

    printf("Welcome to Coffee Shop\n");
    printf("Coffee & Snacks are available here.\n");

    Menu();

    Coffeeprice = Coffee();
    Snackprice = Savouries();

    Total = Coffeeprice + Snackprice;

    printf("\n============================\n");
    printf("Coffee Price : Rs.%d\n", Coffeeprice);
    printf("Snack Price  : Rs.%d\n", Snackprice);
    printf("----------------------------\n");
    printf("Total Bill   : Rs.%d\n", Total);
    printf("============================\n");

    return 0;
}