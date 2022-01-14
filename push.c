#include "monty.h"
int value;

/**
 * _push - function that pushes an element to the stack
 * @stack: 
 *
 */

void _push(stack_t **stack, unsigned int line)
{
	stack_t *new_node = NULL;
	(void)line;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		exit(EXIT_FAILURE);

	new_node->n = value;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
