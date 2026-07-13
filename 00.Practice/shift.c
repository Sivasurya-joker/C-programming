#include<stdio.h>
#include<conio.h>

int main()
    {
        int x,y;
        printf("\n read integers from keyboard (x):-");
        scanf("%d",&x);
        x>>=2;
        y=x;
        printf("\nright shifted data is =%d\n",y);
      return 0;

    }