#include "monty.h"
/**
 * func_handle - function that handles a file
 * @fd: file
 *
 * Return: 0
 */
void func_handle(FILE *fd)
{
	const char *delim = " \n\t\r";
	char *buffer = NULL;
	char *token = NULL;
	size_t BUFFSIZE = 0;
	stack_t *head = NULL;
	unsigned int line = 1;
	int num = 0;

	while (getline(&buffer, &BUFFSIZE, fd) != -1)
	{
		token = strtok(buffer, delim);
		if (token[0] == '#')
		{
			continue;
			line++;
		}
		else if (strncmp(token, "push", 4) == 0)
		{
			token = strtok(NULL, delim);
			if (token != NULL)
			{
				num = atoi(token);
				_push(&head, num);
			}
			else
			{
				printf("L%d: usage: push integer\n", line);
				exit(EXIT_FAILURE);
			}
		}
		else
			get_func_op(&head, token, line);
	}
	free(token);
	fclose(fd);
}
