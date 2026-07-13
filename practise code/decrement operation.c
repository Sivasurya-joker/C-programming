#include <stdio.h>
#include <conio.h>

void main() {
    int i = 50, j = 60, k = 70; 
    int a, b;                  

    printf("Value of i = 50");
    a = i--;

    printf("\nValue after post-decreament of i (stored in a) = %d", a);
    printf("\nUpdated value of i = %d", i);

    printf("\n\nValue of j = 60");
    b = j--; 

    printf("\nValue after pre-decerment of j (stored in b) = %d", b);
    printf("\nUpdated value of j = %d", j);

    getch(); 
}
