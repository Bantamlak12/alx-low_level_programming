#include "main.c"
/**
 * print_alphabet - prints alphabets 'a' to 'z'
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
