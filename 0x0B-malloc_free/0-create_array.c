#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars and
 * initializes it with a specific char
 *
 * @size: size of array
 * @c: char to initialize
 *
 * Return: pointer to array, NULL (failure)
 *
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	str = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);

	while (i < size)
		arr[i] = c;
		i++;

	return (arr);
}
