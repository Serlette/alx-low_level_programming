#include "main.h"

/**
 * puts_half - prints half of a string
 *@str: string
 */

void puts_half(char *str)
{
	int len, i, n;

	len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (len % 2 != 0)
	{
		for (n = (len -1) / 2; str[n] != '\0'; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
