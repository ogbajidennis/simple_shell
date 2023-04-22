#include "main.h"

/**
 * main - Entry point
 *
 * @s: string to check
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int stlen = 0;

	while (s[stlen])
	stlen++;
	return(stlen);
}	
