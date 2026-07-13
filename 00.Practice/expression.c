#include <stdio.h>
#include <conio.h>
void main()
{
    int i,j,k;
    printf("Integersfor i,j and k :\n\n");
    scanf("%d%d",&i,&j,&k);
    printf("\n i=%d j=%d k=%d\n\n",i,j,k);
    k-=(i>5&&i<=20);
    printf("values of the expression is %d \n",k);
}