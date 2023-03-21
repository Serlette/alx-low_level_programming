#include <stdio.h>

/**
 * main - Print the single digits of a hexadecimal base
 * Return: Always 0
 */

int main(void)
{
	char c;
	int y;

	for (y = 0; y < 10; y++)
		putchar(y);

	for (c  = 'a'; c < 'g'; c++)
		putchar(c);

	putchar('\n');

	return (0);

}

