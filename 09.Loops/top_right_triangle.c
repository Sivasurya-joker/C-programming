#include<stdio.h>
int get_the_number(){
int num;
printf("Enter the number :");
scanf("%d",&num);
}
void print_the_triangle(int num)
{
for (int i=1;i<=num;i++){
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
  int num = get_the_number();
  print_the_triangle(num);
  return 0;
}