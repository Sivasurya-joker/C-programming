#include<stdio.h>
void square(){

    int  star=5;
    for (int i=1;i<=star;i++){
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
    }

}


int main (){
  square();
  return 0;

}