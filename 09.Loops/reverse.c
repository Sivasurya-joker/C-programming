#include<stdio.h>
int get_num(){
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   return n;//get fuction and return nmuber itself
}
void print_reverse_num(int n)
{


  for (int i=n;i>0;i--){
     printf("%d\n",i); 
  }
} 
int main (){
   int n =get_num();//assing n to get input.

   
   print_reverse_num(n);

  return 0;
}
