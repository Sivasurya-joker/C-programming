#include<stdio.h>
#include<stdlib.h>

struct create_a_single_linked_list
{
    int data ;
    struct create_a_single_linked_list *nextnode;
};


int main () {

    struct create_a_single_linked_list *first =malloc (sizeof(struct create_a_single_linked_list));

    first->data = 45;
    first->nextnode = NULL;

    struct create_a_single_linked_list *second = malloc (sizeof(struct create_a_single_linked_list));

    second->data =90;
    second->nextnode =NULL;

    first->nextnode =second;

    printf("%d -> %d\n", first->data, first->nextnode->data);
    
    return 0;

}