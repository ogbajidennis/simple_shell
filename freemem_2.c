#include "main.h"

/**
 * free_mem - Frees the memory of the last exercise
 * @freed: Memory to free
 *
 * Return: NULL
 */

void free_mem(char *freed)
{
	if (isatty(STDIN_FILENO))
	{
		_putchar('\n');
		free(freed);
	}

	if (!isatty(STDIN_FILENO))
		free(freed);
}
