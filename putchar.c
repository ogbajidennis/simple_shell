#include "main.h"

/**
 * _putchar - Prints a character
 * @c: The character to print
 *
 * Return: 1 if successful, else -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
