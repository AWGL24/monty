#include "monty.h"

int get_func_op(stack_t **stack, char *func, unsigned int line)
{
	int x = 0;

	/*printf("%s\n", func);*/
	instruction_t funcs[] = {
		{"push", _push},
		{"pall", pall},
		/*{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"nop", nop},*/
		{NULL, NULL}
	};

	while (funcs[x].opcode)
	{
		printf("I am function %s\n", func);
		printf("I am the selector %s\n", funcs[x].opcode);
		if (strcmp(func, funcs[x].opcode) == 0)
		{
			printf("hello\n");
			funcs[x].f(stack, line);
			printf("Hi\n");
			return (0);
		}
		x++;
	}

	printf("Line %d: unknown instruction %s\n", line, func);
	exit (EXIT_FAILURE);

	return (-1);
}
