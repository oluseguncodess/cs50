#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"


// typedef allows us have a shorthand for struct node called "node" 
typedef struct node 
{
    int number;
    struct node *next;
}node;

int main (void) 
{
    // create our first node 
    node *list = NULL;

    // create other nodes --> this needs updating
    for (int i = 0; i < 3; i++)
    {
        // create a node
        node *n = malloc(sizeof(node));

        // check for memory allocation 
        if (n == NULL)
        {
            free(n); // free memory
            return 1; // memory alocation failed
        }

        // assign a value to the number in the node --> the node contains a number variable and another node. 
        n->number = get_int("Number: "); // you access the number in the node using -> (shorthand for *n.number).

        // make the next node point to the previous node (list)
        n->next = list;

        // update the previous node - by pointing it to the next node.
        list = n;
    }

    // Time passes 

    // create a new pointer address to point to the list - which would point to the address of the latest node
    node *ptr = list;

    // This condition ensures we loop through the linked list
    while(ptr != NULL) 
    {
        printf("%i\n", ptr->number); // print out the number in each list

        // the "next" node is needed as it points to the next node
        ptr = ptr->next;
    }

}

