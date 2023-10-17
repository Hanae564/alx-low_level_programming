#include <stdio.h>
/**
* _isdigit - Entry point
* description : 'this is function print a digit'
*  return 1 : if it's a digit
*  return 0: otherwise
*  @c: ascii code
* Return: Always 0.
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
