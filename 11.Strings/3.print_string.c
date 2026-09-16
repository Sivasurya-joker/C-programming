#include<stdio.h>

void getChar(char a[]) {
    printf("Enter the string here:\n");
    scanf("%s", a);
}

int main() {
    char a[100];

    getChar(a);

    printf("Your string word is printed here: %s\n", a);

    return 0;
}
