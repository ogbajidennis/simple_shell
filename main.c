#include "main.h"

/**
 * exec_cmd - A simple shell program that acts as a command line interpreter
 * argc: Integer representing number of arguments passed to the shell
 * @argv: pointer to the arrays of strings that represents
 * the arguments passed to the shell
 * @command: pointer to char variable
 *
 * Return: 0 always
 */

int exec_cmd(char *command)
{
	pid_t pid = fork();
	int status;

	if (pid == -1)
	{
		return (-1);
	}
	else if (pid == 0)
	{
		char *argv[] = {command, NULL};

		execvp(command, argv);
		perror("error");
		exit(EXIT_FAILURE);
	}
	else
	{
		waitpid(pid, &status, 0);

		if (WIFEXITED(status))
			return (WEXITSTATUS(status));
		else
			return (-1);
	}
}


