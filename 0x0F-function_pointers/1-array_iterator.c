#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - function that executes a function given as a
* parameter on each element of an array.
*
*@array:int values
*@size: size_t value
*@action: Function pointer that takes int arguments
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;  /*Data type for size array */

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
