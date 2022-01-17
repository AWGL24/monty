#include "monty.h"
/**
 * @brief 
 * 
 */
void pall(stack_t **stack, unsigned int count)
{
    stack_t *tmp = *stack;
    (void)count;

    while (tmp != NULL)
    {
        dprintf(STDOUT_FILENO, "%d\n", tmp->n);
        tmp = tmp->next;
    }
}