#include<stdio.h>
#include<stdlib.h>
void limitedrand(){
  int u;
  printf("Initial value =");
  scanf("%d",&u);
  int l;
  printf("Final value =");
  scanf("%d",&l);
  int  loop;
  printf("Enter the loop limit:");
  scanf("%d",&loop);
  
  
  for (int i = 0;i<loop;i++)
  {
  int value =rand()%(u-l+1)+ l;
  printf("%d\n",value);
  }

}
int main (){
 limitedrand();
 return 0;   
}

  


 


  