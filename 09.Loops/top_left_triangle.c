#include<stdio.h>
int get_the_number_form_user(){
int num;
printf("Enter the number :");
scanf("%d",&num);
}
void print_the_inclinedtrangle(int num ){

    for (int i=num;i>=1;i--){
        for (int j=1;j<=num-i; j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
         printf("\n");
    }
}
int main ()
{
  int num =get_the_number_form_user();
  print_the_inclinedtrangle(num);
  return 0;
}