#include "main.h"
/**
 *  * 0-isupper - check if the character c is upper
 *   * @c: The character to check
 *    * Return: On success 1.
 *     */
void print_most_numbers(void)
{
	int i;
	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
}
