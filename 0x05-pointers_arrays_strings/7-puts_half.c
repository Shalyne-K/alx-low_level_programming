#include "main.h"

/**
 * puts_half - FAunction that prints half of a string--
 * --folL by \n.
 * @str: A string
 * Return: nothing.
 *
 */

void puts_half(char *str)
{
	int index = 0, x, y;

	while (str[index] != '\0')
		index++;

	if (index % 2 == 0)
		y = index / 2;

	else
		y = (index + 1) / 2;

	for (x = y; x < index; x++)
		_putchar(str[x]);

	_putchar('\n');
}
