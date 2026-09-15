#include<stdio.h>
void user(int *victim)
{
printf("Enter the login id :");
scanf("%d",victim);

}
void attack(int **location, int *victim )
{
    location=&victim;
    
    printf("\nlocation before teleportation: \n ");
    printf("%p \n",(void*)*location);
}
void hacked(int **location_2,int **location)
{   
    location_2=location+50 ;

    printf("\nlocation after teleportation: \n");
    printf("%p \n",(void*)*location_2);

}
int main (){

    int victim;
    int *location;
    int *location_2;

    user(&victim);
    attack(&location,&victim);
    hacked(&location,&location_2);
    return 0;

}