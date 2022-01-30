#include "monty.h"

/**
 * _pint - prints the value at the top of the stack, followed
 * by a new line
 * @stack: stack containing elements of doubly linked list
 * @count: count of lines
 *
 * Return: void
 */

void _pint(stack_t **stack, unsigned int count)
{
	(void)count;

	if (stack == NULL || *stack == NULL)
	{
		printf("error");
		exit(EXIT_FAILURE);

	}
	printf("%i\n", (*stack)->n);
}
