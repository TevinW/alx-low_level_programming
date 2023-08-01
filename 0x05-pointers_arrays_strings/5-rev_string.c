#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev;
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; i--)
	{
		rev = s[i];
		s[j] = s[i];
		s[i] = rev;
	}
}
