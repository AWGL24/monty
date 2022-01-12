#include "monty.h"
/**
 *
 *
 */
void _pint(stack_t **stack)
{
    if (stack == NULL || *stack == NULL)
    {
        printf("error");
            exit(EXIT_FAILURE);

    }
    printf("%i", (*stack)->n);
}