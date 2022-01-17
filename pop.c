#include "monty.h"
/**
 * @brief 
 * 
 */
void pop(stack_t **stack, unsigned int count)
{
    stack_t *tmp = NULL;

    if (!stack || !*stack)
    {
        fprintf(stderr, "L%u: Can't pop an empty stack\n", count);
        freeMalloc(stack);
        exit(EXIT_FAILURE);
    }
    tmp = (*stack)->next;
    free(*stack);
    if (tmp->next != NULL)
        tmp->next->prev = tmp->prev;
    free(tmp);
}