#include "main.h"

/**
 * _strlen_recursion -  a function that returns the length of a string
 * @s - string
 * Return - int
 */
int _strlen_recursion(char *s)
{
	int i;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}
