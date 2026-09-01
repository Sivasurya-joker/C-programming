#include<stdio.h>
#include<stdlib.h>

int main(){
    int n ; 
  
    int *parkingspace;

    int *updatedarea =calloc(20 ,sizeof(n));

    parkingspace=malloc(sizeof(n));

    *parkingspace=5;

    parkingspace=realloc(parkingspace,10*sizeof(n));

    *parkingspace=10;

    parkingspace=calloc(15,sizeof(n));

    *parkingspace=15;

    printf("%d\n", *parkingspace);

    free(parkingspace);
    free(updatedarea);

    return 0;


}