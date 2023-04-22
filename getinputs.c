#include "main.h"

/**
 * getcmd_inputs - Array that contains all inputs entered
 * by user
 * @entry: string input
 * @arguments: Pointer to input array entered by user
 *
 * Return: Length of the array
 */

int getcmd_inputs(char *entry, char **arguments)
{
	int i = 0;
	char *options, *aux = entry, *command;

	command = strtok(entry, "\n\t\r ");
	arguments[i] = command;

	while (aux != NULL)
	{
		++i;
		options = strtok(NULL, "\n\t\r ");
		aux = options;
		arguments[i] = options;
	}

	arguments[i] = NULL;

	return (i);
}
