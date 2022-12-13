#include "main.h"

/**
 * print_alphabet_x10 - 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (( c <= 'z') && (i <= 9))
	{
		_putchar(c);
		c++;
		i++;
	}
	
	_putchar('\n');
}
