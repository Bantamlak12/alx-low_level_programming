#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: is a string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, const unsigned int));
	if ((i != (n - 1)) && (separator != NULL))
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
