
#include <stdio.h>
#include <stdlib.h>

void initialize(int **victim)
{
    *victim = malloc(5 * sizeof(int));
}

void check(int **victim)
{
    if (*victim == NULL)
    {
        printf("IP address not found.\n");
        exit(0);
    }
}

void reallocate_ip(int **victim)
{
    int *temp = realloc(*victim, 10 * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(*victim);
        exit(0);
    }

    *victim = temp;
}

void clear_ip(int **victim)
{
    free(*victim);
    *victim = NULL;
}

int main()
{
    int *victim;

    initialize(&victim);
    check(&victim);

    reallocate_ip(&victim);
     
    int n;

   printf("Enter the limit :");
   scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        victim[i] = (i * 1000) *4;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n New IP :%d  ", victim[i]);
    }

    printf("\n");

    clear_ip(&victim);

    return 0;
}
