#include <stdio.h>
void invertpyramid(){

    
    int n, i, j, s;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = n; i >= 1; --i) {
       for (s = 0; s< n - i; ++s){
           printf("  ");
       }
       for (j = i; j <= 2 * i - 1; ++j){
           printf("* ");
       }
       for (j = 0; j < i - 1; ++j){ 
           printf("*");
       }
    
       printf("\n");
    }
    
}
int main() {
   invertpyramid();
   return 0;
}
