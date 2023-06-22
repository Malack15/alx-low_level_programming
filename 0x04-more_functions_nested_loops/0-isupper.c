#include "main.h"

/**
 *  _isupper- checks whether c is upper
 *
 *@c: the character in ASCII code
 *
 * Return: Always 1 if c is uppercase otherwise 0
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

	_putchar('\n');
}

