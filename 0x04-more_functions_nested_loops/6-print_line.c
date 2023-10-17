#include <stdio.h>
/**
* print_line  - Entry point
* @n : 'n is the number of times the character _ should be printed'
*  descreption: 'draw line in terminal'
*   written by black
* Return:  always 0 (success)
**/
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
