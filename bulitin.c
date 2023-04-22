#include "main.h"

/**
 * getbuiltins - Checks if command entered by user is an
 * inbuilt command
 * @arguments: Command arguments pointer
 * @exit_status: Exit current status
 *
 * Return: 0 if inbuilt, -1 if not
 */

int getbuiltins(char **arguments, int exit_status)
{
	char *builtins[2] = {"exit", "env"};

	int i = 0;

	while (i < 2)
	{
		if (_strcmp(arguments[0], builtins[i]) == 0)
			break;
		i++;
	}
	if (i == 2)
		return (-1);
	if (_strcmp(builtins[i], "exit") == 0)
	{
		free(arguments[0]);
		exit(exit_status);
	}
	if (_strcmp(builtins[i], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1000);
	}
	return (0);
}
