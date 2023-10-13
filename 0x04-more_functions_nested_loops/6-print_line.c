#include <stdio.h>
/**
 *  * 0-isupper - check if the character c is upper
 *   * @c: The character to check
 *    * Return: On success 1.
 *     */
void print_line(int n)
{
	int i;
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0 ; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
