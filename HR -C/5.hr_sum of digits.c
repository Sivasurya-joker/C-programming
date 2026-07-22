#include<stdio.h>
int num,digit,sum=0;
int main() {
    

    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("sum of the digits = %d", sum);
    return 0;
}