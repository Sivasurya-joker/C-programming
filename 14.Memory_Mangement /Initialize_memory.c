#include<stdio.h>
int get_input_from_the_user(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    return number;
}

void get_the_char(char message[]){
        printf("Enter your message:");
        scanf ("%999s",message);
}
int get_the_static_value()
{
     int static_value;
     printf("Enter the static value :");
     scanf("%d",&static_value);
}
void  print_the_data( int number , char message[] ,int static_value){
   
    printf("Global variable: %d\n",number);
    printf("Static variable: %d\n", static_value);
    printf("Message: %s\n", message);
}
int main (){
    int number;
    char message[1000];
    int static_value;

    number = get_input_from_the_user();

    get_the_char(message);

    static_value = get_the_static_value();

    print_the_data(number, message, static_value);

    return 0;


}
