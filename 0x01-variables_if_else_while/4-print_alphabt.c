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
		if (i == 101 ||  i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	printf("\n");
	return (0);
}
