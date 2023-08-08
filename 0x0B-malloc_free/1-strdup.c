#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *new_str;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	new_str = malloc(sizeof(char) * i);

	if (new_str == NULL)
		return (NULL);

	while (str[j])
	{
		new_str[j] = str[j];
		j++;
	}

	return (new_str);
}
