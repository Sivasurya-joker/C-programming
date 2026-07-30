#include<stdio.h>
int main (){
    int n;
    int i,j,k,s;
    printf("value of n =");
    if ((scanf("%d",&n)!=1)){
        return 1;
    }
   
    for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1;k++)
        {
            printf("*");
        }
      printf("\n");
    }
    for (i=n;i>=1;i--){
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1; k<=2*i-1;k++)
        {
            printf("*");
        }
      printf("\n");
    }
     
    return 0;
} 