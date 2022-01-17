#include "monty.h"
/**
 * pall - Function that prints all the values on the
 * the stack from top to bottom.
 * @stack: Contains elements of doubly linked list
 * @count: Line number in which the function call was
 * found
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int count)
{
	stack_t *tmp = *stack;
	(void)count;

	/*printf("I am in the pall function\n");*/
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	/*printf("Pall finished\n");*/
}
