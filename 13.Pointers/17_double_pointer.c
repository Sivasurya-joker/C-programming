#include<stdio.h>

int main ()
{
    int userid ;

    printf("Enter the userid :");
    scanf("%d",&userid);

    int *server_1=&userid;
    int **server_2=&server_1;

    for ( int i=0;i<userid;i++)
    {
        printf("Entered Server %d :%d\n",i+1,**(server_2+1));
    }  
  return 0;
}