#include <stdio.h>
/**
 * main - Entry point *
 * Return: 0
 */
int main(void)
{
	char i;

	i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	printf("\n");
	return (0);
}
