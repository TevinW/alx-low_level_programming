#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++, j++;
	}

	s3[i] = '\0';
	return (s3);
}
