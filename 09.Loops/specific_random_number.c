#include<stdio.h>
#include<stdlib.h>
int get_the_specificnumber (){

    int n;
    printf("Enter the value of n(number limit):");
    scanf("%d",&n);
}
int get__the_specificrand_runtime()    {
    int m;
    printf("Enter the value of m(loop run limit):");
    scanf("%d",&m);
}
void print_the_specificrandom_number (int n, int m)
{

    for (int i=0;i<m;i++)
    {
        int value = rand ()%(n+1);
        printf("%d\n",value);
    }

}





int main (){
int n;
int m;

    n=get_the_specificnumber();
    m=get__the_specificrand_runtime();
    print_the_specificrandom_number(n,m);
    return 0;
}