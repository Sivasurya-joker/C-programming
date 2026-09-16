#include<stdio.h>
#include<stdlib.h>

int main (){
  int *locate = calloc (5,sizeof (int));
   

  if (locate==NULL)
  {
    printf("Memory alloaction failed !!!");
    return 1;
  }

   for (int i  = 0 ; i<5 ; i++)
   {
    printf("%d ",locate[i]);
    
   }
    printf("\n");

    free (locate);

    return 0;

}