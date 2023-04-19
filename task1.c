#include "main.h"

/**
 * main - A simple shell program
 * @argc: integer representing the number of arguments
 * passed to the shell
 * @argv: pointer to the arrays of string that represents the arguments
 * passed to the shell
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *user = "daisy-dawn@Daisy-Dawn20:~$ ";
	char *linepo;
	size_t b = 0;
	ssize_t char_read;

	(void)argc;
	(void) argv;

	while (1)
	{
		write(STDOUT_FILENO, user, strlen(user));
		char_read = getline(&linepo, &b, stdin);

		if (char_read == -1)
		{
			write(STDOUT_FILENO, "Shell process terminated.......exit\n", 38);
			return(-1);
		}
		write(STDOUT_FILENO, linepo, char_read);
	}
	free(linepo);
	return (0);
}
