#include<stdio.h>
int main(){
    int a ;// declare value
    int b ;
    int temp;// temp stre value of a 

    printf("enter the value of first num:");
    scanf("%d",&a);
    printf("enter the value of second num:");
    scanf("%d",&b);

    printf("before swap:\n");
    printf("%d\n",a);
    printf("%d\n",b);

    temp = a;//store a value inital
    a = b;//store b value 
    b = temp;//return a valu to b.
   
    printf("after swap:\n");//swapped here
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
    

}