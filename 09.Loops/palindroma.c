#include<stdio.h>
int reverse(int n)
{
    int rev =0;
    while (n>0)
    {
        int digit = n%10;//remove last num
        rev=rev*10+digit;//reverse the digit
        n/=10;//remove last digit 
    }
    return 0;
}
int palindrome(int n)
{
    if (n<0){
        return 0;
        return n = reverse(n) ;
    }

}
int main ()
{
    int n ;
    printf("Enter the num:");
    scanf("%d",&n);
    if (palindrome(n)){
        printf("yes it is a Palindrome\n");
    }
    else
    {
        printf("No its not a Palindrome\n");
    }
    return 0;
}