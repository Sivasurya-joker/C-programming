#include<stdio.h>

  int get_input_from_user(){
    int saw;
    printf("Enter the number :");
    scanf("%d",&saw);
   return saw;//imp...
  }


void print_the_star_in_rightangled_triangle(int saw){

  for (int i = 0; i<saw;i++)
  {
    for(int j=0;j<i;j++)
    {
    printf(" ");
    }
    for(int k=0;k<saw-i;k++)
    {
      printf("*");
    }
   printf("\n");
  }
}
int main (){
  int saw= get_input_from_user();

  print_the_star_in_rightangled_triangle(saw);
    return 0; 
}