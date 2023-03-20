#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = ++c;
	putchar('\n');
	}
	return (0);
}
