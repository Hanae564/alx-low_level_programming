#include <stdio.h>
/**
 * main - Entry point *
 * Return: 0
 */
int main(void)
{
	char i;

	i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	i = 65;

	while (i <= 90)
	{
		putchar(i);
		i++;
	}
	printf("\n");
	return (0);
}
