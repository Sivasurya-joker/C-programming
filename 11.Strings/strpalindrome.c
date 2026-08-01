#include<stdio.h>
#include<string.h>
int palindrome(int n){
    char str[20];

    sprintf(str,"%d",n);

    int left = 0;
    int right = strlen(str)-1;

  while(left < right){
    if (str[left] !=str[right] ){
        return 0;
    }
   left++;
   right--;
  }
 return 1;
}
int main (){
    int n;
    printf(" Enter the n value :");
    scanf("%d",&n);

    if (palindrome(n)){
        printf("yes\n");
    }
    else{
        printf("No\n");
    }
}