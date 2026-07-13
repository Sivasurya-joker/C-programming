#include <stdio.h>

void printChars(char name[]) {

    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c\n", name[i]);
    }
}

int main() {

    char name[20];

    printf("Say my name ");
    scanf("%s", name);

    // call name
    printChars(name);

    return 0;
}
