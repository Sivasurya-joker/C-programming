#include<stdio.h>
void print_thanks(){
    printf(" Thankyou for using our ATM!");
}
void print_loop(){
    int amount;
    int notes100,notes200,notes500;
    int balance;
    char choice;
    while(1) {
        printf("request for amount withdraw!!\n");
        printf ("enter the amount you want :");
        scanf("%d",&amount);
        if (amount <=10000){
            balance=amount;
            notes500=balance/500;
            balance %=500;

            notes200=balance/200;
            balance%=200;

            notes100=balance/100;

            printf("No of $500:%d \n",notes500);
            printf("No of $200:%d \n",notes200);
            printf("No of $100:%d \n",notes100);
        } else {
            printf("Amount exceeds withdrawal\n");
        }
    printf("Do You want to Continue (y/n)?");
    scanf(" %c",&choice);
    if(choice!='y'&& choice!='Y'){
        break;
    }
    }
}

int main(){
    // int pinnum;
   

    printf ("insert the card !\n");
    // printf("enter the pin number :\n");
    // scanf("%d",&pinnum);

    print_loop();
    print_thanks ();

    return 0;
}
