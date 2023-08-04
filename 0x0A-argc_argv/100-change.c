#include "main.h"

/**
 * main - prints min n.o of coins to make change
 *
 * @argc: n.o of arguments
 * @argv: array of arguments.
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, c = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		c += 1;
	}

	printf("%d\n", c);
	return (0);
}
