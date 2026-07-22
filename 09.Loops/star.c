#include<stdio.h>
int main(){
    int b;
    printf("Enter the star limit:");
    scanf("%d",&b);
    for(int i=0;i<=b;i++){// row creation
         for(int k=0;k<=i;k++){// space loop cond
            printf(" ");
         }
        for(int j=b;j>=i;j--){// star produced here
            
            printf("*");
        } 
        printf("\n");
}
  return 0;
}