#include "main.h"

/**
 * _mprint - Prints the prompt to the standard input
 * @size: Lenght of string inputted by user
 * @prompt: Pointer to the string inputted by user
 *
 * Return: 0 if successful, -1 on failure
 */

int _mprint(const char *prompt, unsigned int size)
{
	int insert = 0;

	if (isatty(STDIN_FILENO))
	{
		insert = write(1, prompt, size);

		if (insert == -1)
			return (-1);
	}
	return (0);
}
