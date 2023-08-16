#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns sum of two numbers
 * @a: 1st n.o
 * @b: 2nd n.o
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of two numbers
 * @a: 1st n.o
 * @b: 2nd n.o
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns product of two numbers
 * @a: 1st n.o
 * @b: 2nd n.o
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns division of two numbers
 * @a: 1st n.o
 * @b: 2nd n.o
 *
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of the division of two numbers
 * @a: 1st n.o
 * @b: 2nd n.o
 *
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}