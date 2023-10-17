#include "main.h"
/**
*  more_numbers  - Entry piont
* Description: 'print numbers to 14 ten time'
* Return: always 0
*/
void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{

		for (i = 0; i <= 14; i++)
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
