#include "main.h"

/**
  *print_numbers - function that prints the numbers
  *
  */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
