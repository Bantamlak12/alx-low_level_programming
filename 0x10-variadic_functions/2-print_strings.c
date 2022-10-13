#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - a function that prints strings
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		if (n == '\0')
			printf("(nil)");
	}
	printf("\n");	
	va_end(ap);
}
