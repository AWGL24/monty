#include "monty.h"
#define BUFFSIZE 1024
/**
 * func_handle - function that handles a file
 * @ac: parameter
 * @av: parameter
 * Return: 0
 */
void func_handle(char **av)
{
	const char *delim = " ";
	/* const char *file = "file.txt";*/
	FILE *fd = fopen(*av, "r");
	char buffer [BUFFSIZE];
	char *token;
	char *x;

	x = fgets(buffer, BUFFSIZE, fd);

	if (!fd)
		fprintf(stderr, "Error: Can't open file %s\n", *av);
	else
	{
		while (x != NULL)
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
	}
}
