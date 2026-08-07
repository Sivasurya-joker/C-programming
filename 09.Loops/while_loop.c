    #include<stdio.h>
    void enter_pinum(){
    int pinnum ;
        printf ("insert the card !\n");
        printf("enter the pin number :\n");
        scanf("%d",&pinnum);
        if(pinnum >=1000 && pinnum <=9999 )
        {
            printf("PIN Accepted ...");
        }
        else 
        {
            printf("PIN Rejected!!!");
        }
        
    }  
    void ask_for_insigths(){
        int amount;
        int notes100,notes200,notes500;
        int balance;
        char choice;
        while(1) {
            printf("request for amount withdraw!!\n");
            printf ("enter the amount you want :");
            scanf("%d",&amount);
            if (amount <=50000){
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
    
    void  thankyou_message(){
        printf(" Thankyou for using our ATM!");
    }
    int main(){
    
       enter_pinum();
       ask_for_insigths();
       thankyou_message();

        return 0;
    }
