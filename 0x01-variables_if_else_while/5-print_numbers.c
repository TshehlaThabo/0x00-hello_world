#include <stdio.h>
#include <stdlib.h>

/**
 * main - single digits number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	while ((i = 0) && (i < 10))
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
