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
	const char *delim = " \n\t\r";
	FILE *fd = fopen(av, "r");
	char *buffer = NULL;
	/*char **token = (char **)malloc(1024 * sizeof(char *));
	char *token_2 = NULL;*/
	char *token = NULL;
	/*char *str = NULL;*/
	size_t BUFFSIZE = 0;
	global_v *take;
	/*int i = 0, j = 0, t = 0, num, len;*/
	stack_t *head = NULL;
	unsigned int line = 0;

	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av);
		exit (EXIT_FAILURE);
	}
	else
	{
		while (getline(&buffer, &BUFFSIZE, fd) != -1)
		{
			token = strtok(buffer, delim);
			while (token != NULL)
			{
				if (strncmp(token, "push", 4) == 0)
				{
					printf("Hi\n");
					printf("%s\n", token);
					token = strtok(NULL, delim);
					printf("%s\n", token);
					_push(&head, line);
				}
				else
				{
					get_func_op(&head, token, line);
				}
				/*str = token;
				printf("%s: This is from token[i]/str\tline %d\n\n\n", str, i);*/
				/*token_2 = strtok(str, " ");
				while (token_2 != NULL)
				{
					printf("New token_2 values: ");
					printf("%s\t on line %d\n", token_2, j);
					j++;
					token_2 = strtok(NULL, " ");
					len = strlen(token_2);
					if (strncmp(token[i], "push", 4) == 0)
					{
						printf("token_2 (of strncmp) %s\n", token_2);
						printf("I'm here\n");
						if (token_2[len] >= '0' || token_2[len] <= '9')
						{
							num = atoi(token_2);
							take->num = num;
						}
					}
					token_2 = strtok(NULL, " ");
				}*/
				/*printf("I'm outside\n");
				token = strtok(NULL, delim);
				i++;*/
			}
			/*printf("Var num has: %d\t take->num had: %d\t on len %d\n\n", num, take->num, len);*/
		}
		if (ferror(fd))
			perror("Error:");
	}
	free(token);
	/*free(token_2);*/
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
