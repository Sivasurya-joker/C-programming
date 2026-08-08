#include <stdio.h>

int  get_input()
{
int a;
printf("enter the limit:");
scanf("%d",&a);
return a;
}
void print_numbers(int a){
int i, j, k;
for (i = 0; i <= a; i++) { /* rows */
   for (j = 0; j <= a-i; j++) {
      printf("   ");
   }
   /* stars */
   for (k = 0; k <= 2*i-1; k++) {
      printf("  %d",k);
   }
   printf("\n");
}
}
int main()
{
   int a;
   a = get_input();
  print_numbers(a);

   return 0;
}