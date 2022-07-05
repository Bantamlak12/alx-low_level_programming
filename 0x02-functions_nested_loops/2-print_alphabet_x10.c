#include "main.h"
/**
 *print_alphabet_x10 - prints alphabets 10 times in new line
 *
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char a ='a';


	for (num = 0; num <= 9; num++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
			_putchar('\n');
		}
	}
}
