#include <stdio.h>

void no_of_customers(int *n) {

    printf("Enter the Count of Customers: ");
    scanf("%d", n);
}

void ask_the_name_of_customer(int n, char name[100][100]) {

    for (int i = 0; i < n; i++) {

        printf("Enter %d Customer Name: ", i + 1);
        scanf("%99s", name[i]);
    }
}

int main() {

    int n;
    char name[100][100];

    no_of_customers(&n);
    ask_the_name_of_customer(n, name);

    return 0;
}