#include "main.h"

/**
 * err_stat - Program to print error status
 * @n: Decimal to print
 *
 * Return: Integer detoning error
 */

int err_stat(int n)
{
	unsigned int num;
	int i = 0;

	if (n < 0)
	{
		num = -n;
		i = i + _putchar('-');
	}
	else
		num = n;

	if (num / 10 != '\0')
		i = i + err_stat(num / 10);

	i = i + _putchar(num % 10 + '0');

	return (i);
}
