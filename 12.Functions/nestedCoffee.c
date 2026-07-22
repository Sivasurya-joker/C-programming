#include<stdio.h>
void Menu (){

printf("***********************************************************************************************************************");
       printf ("\nCoffee :\n");
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
printf("********************************************************************************************************************");
     printf("Savouries:\n");
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
printf("*********************************************************************************************************************");
}
void Coffee (){
    int  coffee ;
    printf(" \nCoffee (1-10):");
    scanf("%d",&coffee);
    
     switch (coffee){
         case 1:
          printf("Americano\n");
          break;
         case 2:
          printf("Breve\n");
          break;
         case 3:
         printf("Cappuccino\n");
          break;
         case 4:
         printf("Doppio\n");
          break;
         case 5:
         printf("Espresso\n");
          break;
         case 6:
         printf("Filter Coffee\n");
         break;
         case 7:
         printf("Galao\n");
         break;
         case 8:
         printf("Honey Latte\n");
         break;
         case 9:
         printf("Iced Coffee\n");
         break;
         case 10:
         printf("Java Coffee\n ");
         break;
         default:
         printf("Drink the water for Hydration\n");
         break;
     }
}
void Savouries(){
    int  snacks;
     printf("\nSavouries(1-10):");
    scanf("%d",&snacks);
    switch(snacks)
{
    case 1:
        printf("Croissant\n");
        break;

    case 2:
        printf("Sandwich\n");
        break;

    case 3:
        printf("Wrap\n");
        break;

    case 4:
        printf("Garlic Bread\n");
        break;

    case 5:
        printf("Pizza Slice\n");
        break;

    case 6:
        printf("Puff\n");
        break;

    case 7:
        printf("French Fries\n");
        break;

    case 8:
        printf("Veg Cutlet\n");
        break;

    case 9:
        printf("Momos\n");
        break;

    case 10:
        printf("Pasta\n");
        break;

    default:
        printf("Invalid Choice\n");
}
}
int main(){
    printf("Welcome to Coffee Shop\n");
    printf("Cofffe & Snacks are  available here \n");
    Menu();
    Coffee();
    Savouries();
    return 0;
}