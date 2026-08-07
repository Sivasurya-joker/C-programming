#include<stdio.h>
void printtriangle(){
    int num = 4;
     for (int i = 0;i<=num; i++){
        for (int j = 0; j<=i;j++){
            printf("*");
        }
        printf("\n");
     }

}

int main (){
  printtriangle();
  return 0;
}