#include "main.h"
/**
 * main - function that prints the alphabet in
 * lowercase followed by a new line
 *
 * Return: 0 (shows success)
 */
int main(void)
{
	char ch = "a";

	for (ch = "a"; ch <= "z"; ch++)
		printf(ch);
	return (0);
}
