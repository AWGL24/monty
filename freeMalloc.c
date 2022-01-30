#include "monty.h"

/**
 * freeMalloc - Frees malloc from doubly linked list
 * @stack: elements of doubly linked list
 *
 * Return: void
 */

void freeMalloc(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (tmp)
	{
		*stack = (*stack)->next;
		free(tmp);
	}
}
