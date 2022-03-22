#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of an array--
 * --of integers foll by \n.
 * @a: An array pointer
 * @n: Integer -- no. of elements of the array
 * Return: nothing.
 */

void print_array(int *a, int n)
{
	int index = 0;

	for (; index < n; index++)
	{
		printf("%d", a[index]);
		if (index < n-1)
			printf(", ");
	}
	putchar('\n');
}
