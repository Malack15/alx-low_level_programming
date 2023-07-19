#include "function_pointers.h"

/**
* print_name - prints a name
* @name: input params for name
* @f: reps a function pointer
*Return:void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
