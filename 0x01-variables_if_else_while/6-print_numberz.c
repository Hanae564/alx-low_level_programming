#include <stdio.h>
/**
 * main - Entry point *
 * n : integer
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;

	}

	putchar('\n');
	return (0);
}
