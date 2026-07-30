#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
  srand((time (NULL)));
  int value = rand ()%100+1;
  int n;
  int loop =5;
  for (int i=0; i<loop;i++){
    printf("Choose the number :");
    scanf("%d",&n);

    if(n==value)
    {
     printf("Your guess is Rigth !!! \n");
     printf("Youse win the game !!! \n");
    }
    else if (n<value)
    {
      printf("Your guess is lower, Try Again! \n");
    }
    else
    {
      printf("Your guess is higher,Take another chance Again\n");
    }
    if (i==loop-1) 
    {
      printf("You lose the game ,Thankyou for palying the Game \n");
      printf("THe number is :%d\n",value);
    }

  }
  return 0;
}