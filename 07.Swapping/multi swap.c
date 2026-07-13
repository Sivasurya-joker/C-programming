#include<stdio.h>
int main(){
    int m ;// declare value
    int n ;
    int o ;
    int temp;// temp stre value of a 

    printf("enter the value of initail limit :");
    scanf("%d",&m);
    printf("enter the value of middle limit:");
    scanf("%d",&n);
    printf("Enter the value of final limit:");
    scanf("%d",&o);
    printf("before swap:\n");

    printf("%d\n",m);
    printf("%d\n",n);
    printf("%d\n",o);

    temp = n;//store n value inital
    n = m;//store m value 
    m = o;//store o
    o = temp;//return n valu to o.
   
    printf("after swap:\n");//swapped here
    printf("%d\n",m);
    printf("%d\n",n);
    printf("%d\n",o);
    return 0;
    

}