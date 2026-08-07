#include <stdio.h>// preprocess and header files 
int checkBattery(){ // fuction get information 
    int a; // var declare 
    printf (" Enter the battry percentage in you system :");// get the infomaion 
    scanf("%d",&a);// read input info 
    printf ("Insert the moblie in port\n"); // print the info is< 50%.
    return a; // return function var to main func.
}
int main(){// main process
 int level = checkBattery(); // call the function declared already.
 if (level>=50){ // checkk leve of battery 
    printf("%d%% Battery",level); // optimized leaves
 } else {
    printf("%d%% low battery plugin thr charger to port !!!\n",level);// insufficient gives.
 }
 return 0; // become 0 and end .
}