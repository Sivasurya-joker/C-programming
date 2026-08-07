#include<stdio.h>
int main(){
    int age;
    char name [30];
    float weight;
     printf("what is your name:\n");
     scanf("%s",name);
     printf("waht is your age:\n");
     scanf("%d",&age);
     printf("Enter your weigth in kg:\n");
     scanf("%f",&weight);


     printf("your name is :%s\n age is: %d years old\n and weigh:t %.2f kgs",name,age,weight);


     return 0;


}