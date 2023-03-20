#include <stdio.h>

/**
 * main - print alphabets apart from e and q
 *Return: always 0
 */

int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y != 'e' && y != 'q')
			putchar(y);
	}

	putchar('\n');

	return (0);
}
