#include "main.h"

/**
 * *_strcpy - copies string to a buffer
 * @dest: destination buffer
 * @src: source string
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	for (i = 0; i < src[len]; i++)
		dest[i] = src[i];
	return (dest);
}
