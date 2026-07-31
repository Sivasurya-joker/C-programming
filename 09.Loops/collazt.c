#include<stdio.h>
int main (){
    int n;
    printf("enter the number ;");
    scanf("%d",&n);

        while (n!=1)
        {
            if (n%2==0)
            {
                n=n/2;
            }
            else
            {
                n=n*3+1;
            } 
            if(n%2==0)
            {
            printf("your number is :%d\n Its is even \n ",n);
            }
            else 
            {
             printf("your number is :%d\n Its is odd \n ",n);
            }
        }

 return 0;
}