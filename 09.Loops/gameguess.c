
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
  srand((time (NULL)));
  int value = rand ()%100+1;
  int n;
  
  int i = 0;
            
  while (1)
  {

      printf("Choose the number form [1-100]=");
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
    else if(n>value)
    {
      printf("Your guess is higher,Take another chance Again\n");
    }
    else
    {
      printf("You lose the game ,Thankyou for palying the Game \n");
      printf("THe number is :%d\n",value);
    }

  }
return 0;
}