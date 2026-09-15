#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *datalink ;
};
int main (){

    struct node *start = NULL;

    start =(struct node*) malloc (sizeof(struct node));

    start->data =45;
    start->datalink =NULL;

    
    printf("%d ->\n",start->data);

    return 0;


}