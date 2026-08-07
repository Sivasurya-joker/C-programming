#include<stdio.h>
void inclinedtriangle(){

    int pass;
    printf("ebter the value of pass = ");
    scanf("%d",&pass);
     for (int i = pass; pass=i; i--)
     {
        for(int j=1; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main (){

    inclinedtriangle();
    return 0;
 }