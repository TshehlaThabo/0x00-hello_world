#include "main.h"

/**
 * print_alphabet - make the alphabet
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
