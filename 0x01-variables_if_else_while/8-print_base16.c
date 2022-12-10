#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int na;
	char alp;

	for (na = 0; na < 10; na++)
	{
		putchar((na % 10) + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
