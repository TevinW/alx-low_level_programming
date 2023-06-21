#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c - parameter to be checked
 *
 * Return: 1 (is a letter, irrespective case), 0 (otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
