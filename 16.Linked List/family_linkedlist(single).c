
#include <stdio.h>
#include <stdlib.h>

struct family {
    char name[100];
    struct family *member;
};

int main(void) {

    struct family *father = NULL;
    struct family *mother = NULL;
    struct family *child = NULL;


    father = malloc(sizeof(struct family));
    mother = malloc(sizeof(struct family));
    child = malloc(sizeof(struct family));

    if (!father || !mother || !child) {
        printf("Memory allocation failed.\n");

        free(father);
        free(mother);
        free(child);

        return 1;
    }


    printf("What is your father name: ");
    scanf("%99s", father->name);

    printf("What is your mother name: ");
    scanf("%99s", mother->name);

    printf("What is your name: ");
    scanf("%99s", child->name);

    father->member = mother;
    mother->member = child;
    child->member = NULL;

    struct family *guest = father;

    while (guest != NULL) {

        printf("%s-> ", guest->name);

        guest = guest->member;

    }
    
    
    guest = father;
    
    while (guest != NULL) {
        
        struct family *member = guest->member;
        
        free(guest);
        
        guest = member;
    }
    
    printf("End of family \n");

    return 0;
}

