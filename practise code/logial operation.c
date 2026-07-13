#include <stdio.h>
#include <conio.h>

void main() 
    { 

         int x=2;
         float y=2;
         printf("\n size of (x)=%d bytes",sizeof(x));
         printf("\n size of (y)=%d bytes",sizeof(y));
          
          printf("\n address of x=%u and y=%u",&x,&y);
        getch();
    }
