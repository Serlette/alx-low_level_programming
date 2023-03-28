#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns length of string
 * @s: pointer to var s
 *Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
