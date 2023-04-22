#include "main.h"

/**
 * p_error - Prints an error message if a command inputted by user
 * is not found
 * @arguments: pointer to the array holding the arguments inputted
 * by user
 * @counter: pointer that counts the number of times a program
 * has been executed
 *
 * Return: exit status
 */

int p_error(char **arguments, int counter)
{
	char *interactive_mode = "hsh";
	char *non_intr_mode = "./hsh";

	if (isatty(STDIN_FILENO))
		write(2, interactive_mode, 3);

	else
		write(2, non_intr_mode, 5);

	write(2, ":", 2);
	err_stat(counter);
	write(2, ":", 2);
	write(2, arguments[0], _strlen(arguments[0]));
	write(2, "command: not found\n", 19);

	return (127);
}
