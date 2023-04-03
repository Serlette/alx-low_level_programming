#include "main.h"

/**
 * *_memset - fills the first n bytes of mem s
 * with byte b
 * @s: memory area
 * @b: char to copy
 * @n: number of bytes
 * Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
