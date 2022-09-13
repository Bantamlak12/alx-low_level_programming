#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
	_putchar('\n');
	}
}
