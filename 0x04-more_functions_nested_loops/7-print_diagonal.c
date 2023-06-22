#include "main.h"
/**
 * print_line - draws a diagonal line in terminal
 * @n: number of times \ is to be printed
 *
 * Return: none
 */
void print_line(int n)
{
	int i;
	int j;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
