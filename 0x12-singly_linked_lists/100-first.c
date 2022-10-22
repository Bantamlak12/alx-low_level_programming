#include <stdio.h>

/**
 * print_string - prints a string before the main
 * Return: Nothing.
 */

void print_string(void)__attribute__ ((constructor));
void print_string(void)
{
	char *str = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";

	printf("%s", str);
}
