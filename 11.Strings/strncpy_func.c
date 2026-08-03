#include<stdio.h>
#include<string.h>
int main (){
    char password[100];
    char limit[8];

    printf("Enter your passworrd in 4 chacaters.\n");
    scanf("%s",password);
    
    strncpy(limit,password,4);
    limit[4]='\0';
     printf("Your password is : %s\n",limit);

    return 0;
}