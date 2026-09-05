#include <stdio.h>
#include <stdlib.h>

struct information {
    int user_id;
    struct information *Database;
};

int main()
{
    struct information *server_1 = NULL;
    struct information *server_2 = NULL;
    struct information *server_3 = NULL;

    server_1 = malloc(sizeof(struct information));
    server_2 = malloc(sizeof(struct information));
    server_3 = malloc(sizeof(struct information));

    if (server_1 == NULL || server_2 == NULL || server_3 == NULL)
    {
        printf("Memory was not allocated properly.\n");
        return 1;
    }

    server_1->user_id = 10;
    server_1->Database = server_2;

    server_2->user_id = 100;
    server_2->Database = server_3;

    server_3->user_id = 1000;
    server_3->Database = NULL;

    struct information *pseudo = server_1;

    while (pseudo != NULL)
    {
        printf("%d => ", pseudo->user_id);
        pseudo = pseudo->Database;
    }

    printf("NULL\n");

    /*
     * Free the linked list
     */
    pseudo = server_1;

    while (pseudo != NULL)
    {
        struct information *next = pseudo->Database;
        free(pseudo);
        pseudo = next;
    }

    return 0;
}