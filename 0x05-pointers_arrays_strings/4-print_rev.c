#include "main.h"

/**
 * print_rev - Print a string in reverse foll. by a \n.
 * @s: String
 * Return: nothing.
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;

	while (index)
		_putchar(s[--index];

	_putchar('\n');
}
