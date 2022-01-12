#include "monty.h"
#define BUFFSIZE 0
/**
 * func_handle - function that handles a file
 * @ac: parameter
 * @av: parameter
 * Return: 0
 */
void func_handle(char **av)
{
	const char *delim = " ";
	/* const char *file = "file.txt";
	   FILE *input_file = fopen(file, "r"); */
	char *buffer = NULL;
	char *token;
	int fd;
	ssize_t x;

	fd = open(*av, O_RDONLY);
	x = getline(&buffer, &BUFFSIZE, fd);

	if (!fd)
		fprintf(stderr, "Error: Can't open file %s\n", *av);
	else
	{
		while (x != -1)
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
