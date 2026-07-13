#include <stdio.h>
#include <conio.h>
void main()
{
   
    int a,b,c;
    float average=0.00,sum;
      printf("Enter the threee no's:\n");
        scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    average=sum/3;
      printf("Sum is=%f\n",sum);
              printf("Average==%f\n",average);
    getch();


}