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
    if (ac == 2)
        func_handle(av[1]);
    else
    {
        printf("Error: Can't open file %s\n", av[1]);
        exit(EXIT_FAILURE);
    }
    return (0);
}
