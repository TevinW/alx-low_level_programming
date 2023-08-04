#include "main.h"

/*
 * main - prints n.o of arguments passed to it
 * 
 * @argc: n.o of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
