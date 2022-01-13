#include "monty.h"


/**
 * func_handle - function that handles a file
 * @ac: parameter
 * @av: parameter
 * Return: 0
 */

void free_grid(char **grid);

void func_handle(char *av)
{
	const char *delim = "\n";
	FILE *fd = fopen(av, "r");
	char *buffer = NULL;
	char **token = (char **)malloc(1024 * sizeof(char *));
	char *token_2 = NULL;
	char *str = NULL;
	size_t BUFFSIZE = 0;
	int i = 0;


	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av);
		exit (EXIT_FAILURE);
	}
	else
	{
		while (getline(&buffer, &BUFFSIZE, fd) != -1)
		{
			token[i] = strtok(buffer, delim);
			while (token[i] != NULL)
			{
				str = token[i];
				printf("%s: This is from token[i]/str\n\n", str);
				token_2 = strtok(str, " ");
				while (token_2 != NULL)
				{
					printf("New token_2 values:\n");
					printf("%s\n\n", token_2);
					token_2 = strtok(NULL, " ");
				}
				token[i] = strtok(NULL, delim);
				i++;
			}
		}
		if (ferror(fd))
			perror("Error:");
	}
	free_grid(token);
	free(token_2);
	fclose(fd);
}

void free_grid(char **grid)
{
	int i = 0;

	while (grid[i] != NULL && grid[i + 1] != NULL )
	{
		printf("%s\n", grid[i]);
		free(grid[i]);
		i++;
	}
	free(grid);
}
