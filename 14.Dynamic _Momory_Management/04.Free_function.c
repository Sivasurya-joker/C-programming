#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *route=calloc(5,sizeof(int));
    if(route==NULL)
    {
        printf("Memory Allocation failed\n");
        return 1;
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",route[i]);
    }

    printf("\n");
    free(route);
    route=NULL;
    return 0;
}