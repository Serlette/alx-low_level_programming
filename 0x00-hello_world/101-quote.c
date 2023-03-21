/* 101-quote*/

#include <stdio.h>
#include <string.h>
/**
 * main - make a quote
 * Return: Always 1
 */

int main(void)
{
	const char *quote =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	FILE *stream = stderr;

	fwrite(quote, sizeof(char), strlen(quote), stream);

	return (1);
}
