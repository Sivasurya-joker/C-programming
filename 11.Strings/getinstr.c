#include <stdio.h>
#include <string.h>

void getString(char location[]) {
    printf("Enter your location:\n");
    scanf("%s", location);
}

void printString(char location[]) {
    printf("%s\n", location);
}

int main() {

    char location[100];

    // get string
    getString(location);

    // print string
    printString(location);

    return 0;
}
