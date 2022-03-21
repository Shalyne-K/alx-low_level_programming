#include "main.h"

/**
 * swap_int - Write a function that swaps values of two integers.
 * @a: Integer pointer
 * @b: Integer pointer
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int first_num = *b;		/* Swap *b to become the first number */
	int second_num = *a;		/* Vice versa */

	*a = first_num;
	*b = second_num;
}
