#include<stdio.h>
#include<stdlib.h>

int main (){
    int n ;
    int *parkingspace;
    
    parkingspace=malloc (sizeof(n));

    *parkingspace=100;

    printf("%d\n",*parkingspace);

    free(parkingspace);

    return 0;


}