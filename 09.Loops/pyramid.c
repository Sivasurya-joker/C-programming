#include <stdio.h>

int main()
{
   int a;
   printf("enter the limit:");
   if (scanf("%d", &a) != 1) {
      return 1;
   }

   int i, j, k;
   for (i = 1; i <= a; i++) { /* rows */
      for (j = 1; j <= a-i; j++) {
         printf(" ");
      }
      /* stars */
      for (k = 1; k <= 2*i-1; k++) {
         printf("*");
      }
      printf("\n");
   }

   return 0;
}