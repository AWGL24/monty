#include "monty.h"

/**
 * sub - Subtracts the top element of the stack from the
 * second top element of the stack
 * @stack: elements of doubly linked list
 *
 * Return: void
 */

void sub(stack_t **stack, unsigned int count)
{
	stack_t *tmp = *stack;
	int result;

	if (!tmp || !tmp->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		freeMalloc(stack);
		exit(EXIT_FAILURE);
	}
	result = (tmp->next->n) - (tmp->n);
	pop(stack, count);
	tmp->n = result;
}
