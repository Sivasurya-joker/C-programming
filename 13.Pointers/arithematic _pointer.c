#include<stdio.h>
#include<stdlib.h>
void get_the_number(int n) 
{
printf("enter the number for arithematic operation in pointer :");
scanf("%d",&n);
}
void print_the_value(int n ,int *arithmatic_operations)
{

printf("arithematic_operations = %u\n",arithmatic_operations);
arithmatic_operations++;

printf("arithematic_operations++= %u\n",arithmatic_operations);
arithmatic_operations--;
}
int main (){
    int n ;
    int *arithmatic_operations=&n;
   
    get_the_number(n);
    print_the_value(n,arithmatic_operations);

    return 0;
}