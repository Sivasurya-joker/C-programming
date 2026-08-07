#include<stdio.h>
#include<string.h>
void get_password (){
char password[100];
char limit[100];

printf("Enter your name .\n");
scanf("%s",password);

strncpy(limit,password,16);
}
void print_the_password(){
        char password[100];
        char limit[100];
        limit[16]='\0';
        printf("Your password is : %s@vslinux\n",limit);
}
int main (){
    get_password();
    export();
    return 0;
}