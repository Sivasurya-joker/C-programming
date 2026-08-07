#include<stdio.h>
void get_topdownstar(){
    int as;
    printf("Enter the value of as :");
    scanf("%d",&as);
}
void print_topdown()
{
        int as;

        for (int i =1; i<=as;i++){
            for (int j=1;j<=i;j++){
                
                printf("*");    
            }
            printf("\n");
     }

}
int main (){
    get_topdownstar();
    print_topdown();
    return 0;
}