#include<stdio.h>
 int main (){
    int  password;

    printf("Enter the password :");
    scanf ("%d",&password);

    int *lock=&password;
    int *key =&password;

    if (lock==key)
    {
        printf("password matched\n Lock opened");
    }
    else
    {
       printf("password mismatched\n try again");
    }


 }