#include <stdio.h>
#include <stdlib.h>

/**
 * main - alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q') && (c != 'e'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
