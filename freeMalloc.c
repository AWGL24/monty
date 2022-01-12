#include "monty.h"
/**
 * @brief 
 * 
 * 
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