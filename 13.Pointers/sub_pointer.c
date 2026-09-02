#include<stdio.h>
int main () {
    
    int buy ;
    printf("Enter the cost price :");
    scanf("%d",&buy);
    
    int sell;
    printf("Enter the sell price :");
    scanf("%d",&sell);
    
    
    
    int *cp=&buy;
    int *sp=&sell;
     
   printf("cp=%u\nsp=%u\n", *cp, *sp);

    int discount =buy-sell;

    printf("\nDiscount of sp""&cp is %d\n",discount);

    
     printf("Your Business will face a loss area.\n");
    

    return 0;

}