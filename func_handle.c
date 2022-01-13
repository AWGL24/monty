#include "monty.h"


/**
 * func_handle - function that handles a file
 * @ac: parameter
 * @av: parameter
 * Return: 0
 */
void func_handle(char *av)
{
	const char *delim = " \n\t\r";
	FILE *fd = fopen(av, "r");
	char *buffer = NULL;
	char *token;
	size_t BUFFSIZE = 0;
	ssize_t x;

	x = getline(&buffer, &BUFFSIZE, fd);

	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av);
		exit (EXIT_FAILURE);
	}
	else
	{
		if (x != -1)
		{
			token = strtok(buffer, delim);
			while (token != NULL)
			{
				printf("%s\n", token);
				token = strtok(NULL, delim);
			}
		}
		if (ferror(fd))
			perror("Error:");
		fclose(fd);
		free(buffer);
	}
}
