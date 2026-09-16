#include<stdio.h>

void router( )
{
    void check_packet()
    {
        printf("packets checked...\n");
    }
    check_packet();
}

int main (){
    router ();
    return 0;   

}