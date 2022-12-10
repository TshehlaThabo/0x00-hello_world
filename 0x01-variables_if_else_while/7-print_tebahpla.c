#include <stdio.h>
#include <stdlib.h>

/**
 * main - lowercase alphabets reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cha = 'z';

	while (cha >= 'a')
	{
		putchar(cha);
		cha--;
	}
	putchar('\n');
	return (0);
}
