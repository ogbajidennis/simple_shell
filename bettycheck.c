#include "main.h"
#include <unistd.h>

/**
 * main - A program that finds the maximum number between 3 numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 7, b = 10, c = 15;

	if (a > b && a > c)
		write(1, "The highest is 7", 17);

	else if (b > a && b > c)
		write(1, "The highest is 10", 18);

	else
		write(1, "The highest is 15", 18);
	write(1, "\n", 2);

	return (0);

}
