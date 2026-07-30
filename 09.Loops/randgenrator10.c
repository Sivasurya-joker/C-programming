#include<stdio.h>
#include<stdlib.h>
int main (){
    int n ;
    printf("Enter the limit:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
    int value =rand();
    printf("%d\n",value);
    }
  return 0;
}
