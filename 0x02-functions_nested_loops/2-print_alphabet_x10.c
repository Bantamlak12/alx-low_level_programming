#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
	_putchar('\n');
	}
}
