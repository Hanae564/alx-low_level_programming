#include "main.h"
/**
 *_isupper - check if the character c is upper
 *@c: The character to check
 *Return: On success 1.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
