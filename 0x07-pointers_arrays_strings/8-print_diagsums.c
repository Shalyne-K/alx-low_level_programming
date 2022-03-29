#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonal
 *
 * @a: 2d array
 * @size: diagonal size
 */

void print_diagsums(int *a, int size)
{
	int i;

	int x = 0;
	int y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[(i * size) + i];
		y += a[(size - 1) + ((size - 1) * i)];
	}

	printf("%d, %d\n", x, y);
}
