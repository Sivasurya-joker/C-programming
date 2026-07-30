#include<stdio.h>
int main (){
    int saw=4;
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
    return 0;
}