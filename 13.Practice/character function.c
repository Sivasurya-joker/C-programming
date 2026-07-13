#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() 
{ 
    char ch;
    printf("Enter your character/digit: ");
    ch = getchar();
    
    if (isalpha(ch))
        printf("It is an alphabet...");
    else if (isdigit(ch))
        printf("It is a digit...");
    else 
        printf("It is alphanumeric...");
    
    getch();
    return 0;
}