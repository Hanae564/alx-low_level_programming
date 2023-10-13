#include "main.h"
/**
 *  * 0-isupper - check if the character c is upper
 *   * @c: The character to check
 *    * Return: On success 1.
 */
void more_numbers(void)
{
	int i,j;
	j = 0;
	while (j < 10)
	{
		for(i = 0; i <= 14; i++)
		{
			if (i >= 10 && i <= 14)
			{
				putchar(i / 10 + '0');
			}
			putchar(i % 10 + '0');
		}
		j++;
		putchar('\n');
	}
}
