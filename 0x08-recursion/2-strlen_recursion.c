#include "main.h"
/**
  * _strlen_recursion - A function that returns the length of a string
  *
  *@s : String
  *
  *Return : int
  */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
