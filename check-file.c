#include "main.h"

/**
 * check_file - checks whether a file exists
 * @pathname: path to location of file
 *
 * Return: 0 if found, -1 if not found
 */

int check_file(char *pathname)
{
	int exist_stat;

	exist_stat = (open(pathname, O_RDONLY));

	if (exist_stat != -1)
	{
		close(exist_stat);
		return (0);
	}
	else
		return (-1);
}
