#include "monty.h"
/**
 * @brief 
 * 
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
