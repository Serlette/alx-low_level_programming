/* 102-print_comb5*/

#include <stdio.h>

/**
 * main - print double number combinations
 * Return: Always 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');

			if (x == 98 && y == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
