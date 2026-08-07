#include<stdio.h>
void printpyramid()
{
    int n,i,j,k;
 printf("value of n =");
if ((scanf("%d",&n)!=1))
{
    return ;
}

for (i=1;i<=n;i++)
{
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
}
int main (){
    printpyramid();
    return 0;
}