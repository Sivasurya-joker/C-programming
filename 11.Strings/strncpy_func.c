#include<stdio.h>
#include<string.h>
int main (){
    char password[100];
    char limit[100];

    printf("Enter your name .\n");
    scanf("%s",password);
    
    strncpy(limit,password,16);
    limit[16]='\0';
     
            printf("Your password is : %s@vslinux\n",limit);
        
    return 0;
}