#include "main.h"
/**
 * print_last_digit -  prints last digit of a number
 * @n: number digit is printed from
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (m < 0)
	{
		m = -m;
	}
	_putchar(m + '0');
	return (m);
}
