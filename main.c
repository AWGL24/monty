#include "monty.h"
/**
 * main - check the code
 * @ac: Number of arguments
 * @av: Double pointer to hold arguments
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	FILE *fd;

	if (ac == 2)
	{
		fd = fopen(av[1], "r");
		if (!fd)
		{
			fprintf(stderr, "Error: Can't open file %s\n", av[1]);
			exit(EXIT_FAILURE);
		}
		func_handle(fd);
	}
	else
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
