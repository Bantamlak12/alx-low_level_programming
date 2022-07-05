#include "main.h"
/**
 *
 *print_alphabet - prints alphabets 'a' to 'z'
 *
 */
void print_alphabet(void)
{
	char a = 'a';

	for(a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
