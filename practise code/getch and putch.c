/*getch and putch  function */
#include <stdio.h>
#include <conio.h>

/// @brief 
void main() 
    { 
        char ch;
        printf("enter the character");
        ch=getch();
        printf ("\n you have entered!");
        putch(ch);
        getch();
    }

