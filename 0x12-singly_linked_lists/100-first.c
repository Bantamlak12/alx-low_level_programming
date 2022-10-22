#include <stdio.h>

/**
 * print - prints a string before the main
 * Return: Nothing.
 */

void __attribute__ ((constructor)) print(void)
{
	char *str = "You're beat! and yet, you must allow,\n"
				"I bore my house upon my back!\n";

	printf("%s", str);
}
