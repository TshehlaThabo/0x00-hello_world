#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cha = 'a';

	while (cha <= 'z')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
