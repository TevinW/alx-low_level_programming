#include "main.h"
/**
 * _islower - function that checks for lowercase character
 *
 * Return: 1 (lowercase), 0 (otherwise)
 */
int _islower(int c)
{
	char ch;

	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}
