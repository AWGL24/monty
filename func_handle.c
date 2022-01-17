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
	char *token = NULL;
	size_t BUFFSIZE = 0;
	stack_t *head = NULL;
	unsigned int line = 1;
	int num = 0;

	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av);
		exit(EXIT_FAILURE);
	}
	else
	{
		while (getline(&buffer, &BUFFSIZE, fd) != -1)
		{
			token = strtok(buffer, delim);
			/*printf("Line number is: %d\n", line);
			printf("token is: %s\n", token);*/
			if (token[0] == '#')
			{
				continue;
				line++;
			}
			else if (strncmp(token, "push", 4) == 0)
			{
				/*printf("Hi\n");
				  printf("%s\n", token);*/
				token = strtok(NULL, delim);
				/*printf("%s\n", token);*/
				num = atoi(token);
				_push(&head, num);
			}
			else
			{
				/*printf("Before get_func_op token is: %s\n", token);*/
				get_func_op(&head, token, line);
			}
		}
		if (ferror(fd))
		{
			perror("Error:");
		}
		free(token);
		fclose(fd);
	}
}

/*void free_grid(char **grid)
  {
  int i = 0;

  while (grid[i] != NULL && grid[i + 1] != NULL )
  {
  printf("%s\n", grid[i]);
  free(grid[i]);
  i++;
  }
  free(grid);
  }*/
