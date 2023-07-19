#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - executes a function given as a parameter on each element
* @array: first parameter
* @size: second parameter
* @action: third parameter
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{size_t i;

if (array && action)
{
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}
