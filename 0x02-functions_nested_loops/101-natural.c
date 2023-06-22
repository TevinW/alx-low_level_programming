#include <stdio.h>
/**
 * main - prints sum of all multiples
 * of 3 and 5 up to 1024
 * 
 * Return: sum
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}

