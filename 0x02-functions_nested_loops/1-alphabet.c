#include "main.h"
/**
 * print_alphabet - prints alphabets 'a' to 'z'
 */
void print_alphabet()
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
