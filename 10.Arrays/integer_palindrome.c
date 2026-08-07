#include<stdio.h>
int getNumber(int n){
   int  back=0, ace=n;
   while(n>0){
    back=back*10+n%10;
    n=n/10;
   }
   if(ace==back){
    return 1;
   }
   else{
    return 0;
   }
}
  
int main(){
 int n;
   printf("enter the palindrome number :");
    scanf("%d",&n);
    
    if (getNumber(n)){
        printf("It is a palinderome %d \n",n);
    }
    else{
        printf("it is not a palindrome\n");
    }
}
