#include <stdio.h>
#include <stdlib.h>

// Structure
struct home
{
    int yourdata;
    struct home *nextplace;
};

// Allocate memory for places
void allocate_homeplace(struct home **friend_home,
                        struct home **teashop,
                        struct home **school)
{
    *friend_home = malloc(sizeof(struct home));
    *teashop = malloc(sizeof(struct home));
    *school = malloc(sizeof(struct home));

    if (*friend_home == NULL || *teashop == NULL || *school == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

// Assign data and addresses
void assign_address(struct home *friend_home,
                    struct home *teashop,
                    struct home *school)
{
    printf("Enter the number for friend's home: ");
    scanf("%d", &friend_home->yourdata);

    printf("Enter the number for tea shop: ");
    scanf("%d", &teashop->yourdata);

    printf("Enter the number for school: ");
    scanf("%d", &school->yourdata);

    // Connect the nodes
    friend_home->nextplace = teashop;
    teashop->nextplace = school;
    school->nextplace = NULL;
}

// Check places
void check_places(struct home *friend_home,
                  struct home *teashop,
                  struct home *school)
{
    if (friend_home == NULL || teashop == NULL || school == NULL)
    {
        printf("Places are not ready..\n");
        return;
    }

    printf("All places are ready!\n");
}

// Print linked list
void print_linked_list(struct home *friend_home)
{
    struct home *current = friend_home;

    while (current != NULL)
    {
        printf("%d -> ", current->yourdata);
        current = current->nextplace;
    }

    printf("END\n");
}

// Free memory
void free_space(struct home *friend_home)
{
    struct home *temp;

    while (friend_home != NULL)
    {
        temp = friend_home;
        friend_home = friend_home->nextplace;
        free(temp);
    }
}

// Main function
int main()
{
    struct home *friend_home = NULL;
    struct home *teashop = NULL;
    struct home *school = NULL;

    // Allocate memory
    allocate_homeplace(&friend_home, &teashop, &school);

    // Assign data and connect nodes
    assign_address(friend_home, teashop, school);

    // Check nodes
    check_places(friend_home, teashop, school);

    // Print linked list
    print_linked_list(friend_home);

    // Free memory
    free_space(friend_home);

    return 0;
}

