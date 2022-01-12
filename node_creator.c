#include "monty.h"
/**
 *
 *
 *
 */
stack_t *node_creator(int n)
{
    stack_t *new_node = NULL;

    new_node = malloc(sizeof(stack_t));
    if (!new_node)
        exit(EXIT_FAILURE);
    new_node->n = n;
    new_node->next = NULL;
    new_node->prev = NULL;

    return (new_node);
}
