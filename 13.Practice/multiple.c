#include<stdio.h>
#include<conio.h>
int a,b;
int mul(int,int);
void main()
 {
    int c;
    printf("values for the a and b:");
    scanf ("%d%d",&a,&b);
    c=mul(a,b);
    printf("Multiplication of the %d*%d=%d",a,b,c);
    getch();
 }
int mul(int a,int b)
{
    int c;
    c=a*b;
    return (c);
}
