#include "monty.h"
int value;
/**
 *
 *
 *
 */
void _push(stack_t **stack, unsigned int line_num)
{
    stack_t *new_node = NULL;
    (void)line_num;

    new_node = node_creator(value);

    new_node->next = *stack;
    if (*stack != NULL)
        (*stack)->prev = new_node;
    *stack = new_node;
}
