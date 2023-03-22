#include "main.h"

/**
 * _islower - check lower alphabets
 * @c: int argument
 * Return: always 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
