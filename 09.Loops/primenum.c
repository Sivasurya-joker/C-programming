#include<stdio.h>
#include<conio.h>
int main (){
    int a;
    printf("Enter the loop limit:\n");
    scanf("%d",&a);

    for(int i=2; i<=a;i++){
        int count=0;
        for(int j=1;j<i;j++){
            count++;
        } 
        if(count==2){
        printf("\n%d",i); 
        }     
    }
    return 0;
}
