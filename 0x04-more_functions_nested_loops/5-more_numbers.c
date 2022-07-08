#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int hor, ver;

	for (ver = 0; ver <= 9; ver++)
	{
		for (hor = 0; hor <= 14; hor++)
		{
			if (hor > 9)
				_putchar((hor / 10) + '0');
			_putchar((hor % 10) + '0');
		}
		_putchar('\n');
	}
}
