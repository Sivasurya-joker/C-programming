#include<stdio.h>
#include<stdlib.h>

int main (){
    int n ;
    int *parkingspace;

    parkingspace=malloc(sizeof(n));

    *parkingspace=100;

    parkingspace=realloc(parkingspace,500 * sizeof(n));

    *parkingspace=500;

    printf("%d\n",*parkingspace );

    free(parkingspace);

    return 0;

}