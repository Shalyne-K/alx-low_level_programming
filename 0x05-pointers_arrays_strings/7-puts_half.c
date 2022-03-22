#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
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

	for (x = y; i < index; x++)
		_putchar(str[x]);

	_putchar('\n');
}
