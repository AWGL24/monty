#include "monty.h"

/**
 * get_func_op - Function that retrieves function call and
 * sends it to correct function
 * @stack: stack containing the elements of doubly linked
 * list
 * @func: Name of function to be executed
 * @line: Line number that you are currently on in the file
 *
 * Return: 0 if successful, -1 if failure occurs.
 */

int get_func_op(stack_t **stack, char *func, unsigned int line)
{
	int x = 0;
	instruction_t funcs[] = {
		{"pall", pall},
		{"pint", _pint},
		{"pop", pop},
		{"sub", sub},
		{"nop", nop},
		{NULL, NULL}
	};

	while (funcs[x].opcode)
	{
		if (strcmp(func, funcs[x].opcode) == 0)
		{
			/*printf("Pint inside if statement\n");*/
			funcs[x].f(stack, line);
			return (0);
		}
		x++;
	}

	printf("L%d: unknown instruction %s\n", line, func);
	exit(EXIT_FAILURE);

	return (-1);
}
