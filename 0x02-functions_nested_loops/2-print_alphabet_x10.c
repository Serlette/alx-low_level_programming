#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 * return: always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
