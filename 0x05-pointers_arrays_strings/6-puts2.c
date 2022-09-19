#include "main.h"
#include<string.h>
/**
 * puts2 - prints character of a string
 *
 * @str: string
 */
void puts2(char *str)
{
	int index, len;

	len = strlen(str);
	for (index = 0; index < len; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
