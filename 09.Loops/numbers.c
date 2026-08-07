#include <stdio.h>

int main()
{
   int a;
   printf("enter the limit:");
   scanf("%d",&a);

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

   return 0;
}