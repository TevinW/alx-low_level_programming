#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers in order
 * from n to 98 followed by a new line
 * @n: starting number
 *
 * Return: numbers from n to 98
 */
void print_to_98(int n)
{
	if (n <=98)
	{
		for (; n <=98; n++)
		{
			if (n < 98)
			{
				printf("%d, ", n);
				printf("\n");
			}
			else
			{
				printf("%d", n);
				printf("\n");
			}
		}
	}
	else
	{
		for (; n >=98; n--)
		{
			if (n > 98)
			{
				printf("%d, ", n);
				printf("\n");
			}
		
			else
			{
				printf("%d", n);
				printf("\n");
			}
		}
	}
}	
