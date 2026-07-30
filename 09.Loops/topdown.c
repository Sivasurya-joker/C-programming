#include<stdio.h>
int main (){
    int as;
    printf("ENter the valu of as :");
    scanf("%d",&as);
     for (int i =1; i<=as;i++){
        for (int j=1;j<=i;j++){
            
            printf("*");    
        }
        printf("\n");
     }

    return 0;
}