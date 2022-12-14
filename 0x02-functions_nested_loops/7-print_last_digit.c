#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 *
 */
int print_last_digit(int nld)
{
	int pld;

	if (nld < 0)
	{
		nld = -nld;
		pld = nld % 10;
	}
	_putchar('\n');
	return (pld);
}
