#include <stdio.h>


int  main (){
    int victim ; 
    printf("Enter your user id :");
    scanf("%d",&victim);

    int *ipaddress_2;

    

    ipaddress_2=&victim;

    
    printf("location in  ipaddress before teleportation: \n ");
    printf("%p \n",ipaddress_2);
    
    ipaddress_2=ipaddress_2+50 ;

    printf("location in  ipaddress after teleportation: \n");
    printf("%p \n",ipaddress_2);

    return 0;

}