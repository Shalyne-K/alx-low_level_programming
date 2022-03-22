#include "main.h"

/**
 * puts2 - Function that prints every other character of a string--
 * --starting with the first char, foll by \n.
 * @str: String
 * Return: nothing.
 */
void puts2(char *str)
{
	int index = 0, x = 0;

	while (str[index] != '\0')
	index++;

	index -= 1;

	for (; x <= index; x += 2)
	_putchar(str[x]);

	_putchar('\n');
}
