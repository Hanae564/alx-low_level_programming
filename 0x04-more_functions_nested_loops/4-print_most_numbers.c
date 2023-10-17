#include "main.h"
/**
* print_most_numbers  - Entry point
*  descreption: 'print from 1 to 10 except 2 and 4'
*   written by black
* Return:  always 0 (success)
**/
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
