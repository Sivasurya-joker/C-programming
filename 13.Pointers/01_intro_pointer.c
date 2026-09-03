#include<stdio.h>
int main ()
{
    int rollnumber = 10;
    int *db_address=&rollnumber;

    printf("%p\n",db_address);

    return 0 ;
}