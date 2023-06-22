#include "main.h"
/**
 * print_last_digit -  prints last digit of a number
 * @n: number digit is printed from
 *
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	if ((n % 10) == 0)
		return (0);
	else
		return (n % 10);
}
