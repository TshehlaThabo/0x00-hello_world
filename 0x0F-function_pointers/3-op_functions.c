#include "3-calc.h"

/**
 * op_add - adds @a and @b
 *
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies @a and @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides @a by @b
 *
 * @a: input 1
 * @b: input 2
 *
 * Return: results of the division @a and @b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets the reminder of the division between @a and @b
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);

	}
	return (a % b);
}
