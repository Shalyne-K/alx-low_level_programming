#include "main.h"

/**
 * _puts - Print a string followed by \n to std output
 * @str: String
 * Return: nothing.
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
