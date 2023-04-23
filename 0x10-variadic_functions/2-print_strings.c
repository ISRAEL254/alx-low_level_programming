#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
