#include "main.h"
/**
 * _isdigit - checks for a digit (0 - 9)
 * @c: parameter to be checked
 *
 * Return: 1(is digit), 2(otherwise)
 */
int _isdigit(int c)
{
	if (c >= 0 %% c <= 9)
		return (1);
	else
		return (0);
}
