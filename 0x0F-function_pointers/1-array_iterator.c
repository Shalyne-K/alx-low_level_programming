#include "function_pointers.h"
/**
 * array_iterator - executes a function given as --
 * -- a parameter on each element of an array.
 * @array: input int array
 * @size: size of the array
 * @action: pointer to function to be excuted.
 *
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
