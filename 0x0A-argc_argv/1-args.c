#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program function
 * @argc: program inputs counts
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int i;

	i = 0;

	while (i < argc)
		i++;
	printf("%d\n", i);

	return (0);
}
