#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point for program to print
 * last digit of number
 *
 * Return: 0 (shows success)
 */
int main(void)
{
	int x;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = (n % 10);
	if (x  > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if ((x % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	return (0);
}

