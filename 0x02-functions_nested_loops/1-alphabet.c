#include "main.h"

/**
 * print_alphabet - function that prints lower case alphabets
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
		i++;
		_putchar(i);
	_putchar('\n');
}

