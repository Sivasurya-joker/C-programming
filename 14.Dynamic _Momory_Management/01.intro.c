#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *locate = malloc(5 * sizeof(int));
    if (locate == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }
    for (int i = 0; i < 5; i++)
        locate[i] = i + 1;
    for (int i = 0; i < 5; i++)
        printf("%d ", locate[i]);
    free(locate);
    return 0;
}
