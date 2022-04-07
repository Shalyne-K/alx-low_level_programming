#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * If malloc fails, terminate with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	char *allocMem;

	allocMem = malloc(b);

	if (allocMem == NULL)
		exit(98);

	return (allocMem);
}
