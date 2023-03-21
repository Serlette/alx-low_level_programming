/* 7-print_tebahpla */

#include <stdio.h>

/**
 * main - Print alphabets in reverse order
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);

}
