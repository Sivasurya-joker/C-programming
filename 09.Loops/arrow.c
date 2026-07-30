#include<stdio.h>

int main() {
    int ss = 5;

    for (int i = 1; i < ss; i++) {   
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        for (int k = 1; k < ss - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}