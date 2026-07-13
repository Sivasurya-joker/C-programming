#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    
    printf("enter no of names to be entered:\n");
    printf("Enter your name: ");
    scanf("%s", name);   

    printf("%lu", strlen(name));

    return 0;
}
