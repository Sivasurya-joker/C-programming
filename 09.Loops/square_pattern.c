#include<stdio.h>
int give_the_number(){
    int star;
    printf("enter the no of stas to be printed : \n");
    scanf("%d",&star);
}

void square(int star){

    
    for (int i=1;i<=star;i++){
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
    }

}


int main (){
  int star= give_the_number();
  square(star);
  return 0;

}