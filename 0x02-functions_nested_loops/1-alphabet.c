#include "main.h"
/**
 * main - function that prints the alphabet in
 * lowercase followed by a new line
 *
 * Return: 0 (shows success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	return (0);
}