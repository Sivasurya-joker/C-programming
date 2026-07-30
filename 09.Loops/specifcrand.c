#include<stdio.h>
#include<stdlib.h>
int main (){
    int n;
    printf("Enter the value of n(number limit):");
    scanf("%d",&n);
    int m;
    printf("Enter the value of m(loop run limit):");
    scanf("%d",&m);

    for (int i=0;i<m;i++){
        int value = rand ()%(n+1);
        printf("%d\n",value);
    }
    return 0;
}