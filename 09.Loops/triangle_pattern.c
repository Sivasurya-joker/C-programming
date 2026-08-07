#include<stdio.h>
void get_input()
{
int num ;
printf("Give the number :");
scanf("%d",&num);
}

void print_triangle()
{
  int num;
     for (int i = 0;i<=num; i++){
        for (int j = 0; j<=i;j++){
            printf("*");
        }
        printf("\n");
     }

}

int main (){
  get_input();
  print_triangle();
  return 0;
}