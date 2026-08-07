#include<stdio.h>
#include<stdlib.h>

  void get_the_number()
  {
    int n ;
    printf("Enter the limit:");
    scanf("%d",&n);
  }
  void generate4_the_random_number ()
  {
    int n;
    for(int i=0;i<n;i++)
    {
    int value =rand();
    printf("%d\n",value);
    break;
    }
  }
int main (){
  get_the_number();
  generate4_the_random_number();
  return 0;
}
