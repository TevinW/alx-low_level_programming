#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
		;

	for (j = i; j > 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
