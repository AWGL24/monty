#include "monty.h"
/**
 *
 *
 *
 */
int main(int ac, char **av)
{
    if (ac == 2)
        func_handle(av[1]);
    else
    {
        dprintf("Error: Can't open file %s\n", av[0]);
        exit(EXIT_FAILURE);
    }
    return (0);
}
