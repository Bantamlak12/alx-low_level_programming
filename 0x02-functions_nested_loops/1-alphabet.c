#include "main.h"
/**
 * print_alphabet - prints the alphabets in lowercase.
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar('\n');
}
