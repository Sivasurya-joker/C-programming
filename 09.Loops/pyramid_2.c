#include<stdio.h>
int get_the_input(){
int n;
printf("value of n =");
if ((scanf("%d",&n)!=1))
{
    return 0;
}
return n;
}
void print_pyramid(int n)
{
for (int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i;j++)
    {
        printf(" ");
    }
    for(int k=1; k<=2*i-1;k++)
    {
        printf("*");
    }
  printf("\n");
}
}
int main (){
    int n;
   n= get_the_input();
    print_pyramid(n);
    return 0;
}