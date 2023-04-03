#include "main.h"

/**
 * _memcpy - copies mem area
 * @dest: destination mem area
 * @src: source mem area
 * @n: number of bytes copied
 * Return: destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
