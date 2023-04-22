#include "main.h"

/**
 * get_path - Checks if command entered by user is one
 * whose path can be executed
 * @arguments: pointer that stores entries by user
 *
 * Return: 0 on success, -1 on failure (command non-existent)
 */

int get_path(char **arguments)
{
	char *global_path = NULL;
	char *global_dup = NULL;
	char *dir_path = NULL;
	char *test_cph[121];
	char *command_path = NULL;
	int exit_status = -1, i = 0;

	global_path = _getenv("PATH");

	if (global_path == NULL)
		return (-1);
	global_dup = (_strdup(global_path));
	dir_path = strtok(global_dup, ":");

	if (dir_path == NULL)
		return (-1);
	free(global_path);

	while (exit_status == -1 && dir_path != NULL)
	{
		command_path = append_command(dir_path, arguments[0]);
		test_cph[i] = command_path;
		exit_status = check_file(test_cph[i]);
		dir_path = strtok(NULL, ":");
		i++;
	}
	i--;
	free(global_dup);
	free_grid(test_cph, i);

	if (exit_status == 0)
	{
		arguments[0] = test_cph[i];
		return (0);
	}
	else
	{
		free(test_cph[i]);
		return (-1);
	}
}
