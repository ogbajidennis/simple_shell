#include "main.h"

/**
 * execute - Creates new child process using fork, executes and
 * waits for the child process to finish execution
 * @arguments: Input array
 *
 * Return: 0 if successful, -1 on failure
 */

int execute(char **arguments)
{
	pid_t pid = 0;
	int stat = 0, exe_stat = 0;

	pid = fork();

	if (pid == -1)
		_mprint("failed\n", 7);
	else if (pid == 0)
	{
		exe_stat = execve(arguments[0], arguments, environ);

		if (exe_stat == -1)
		{
			exe_stat = 126;
			perror("hsh");
			exit(exe_stat);
		}
		exit(0);
	}
	else
		wait(&stat);
	exe_stat = WEXITSTATUS(stat);
	return (exe_stat);
}
