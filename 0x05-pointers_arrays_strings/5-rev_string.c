#include "main.h"

/**
 * rev_string - Function that reverses a string--
 * --foll by \n.
 * @s: A string
 * Return: Nothing
 */

void rev_string(char *s)
{
	char *x = s;
	char y[1000];
	short z = 0;

	while (*s != '\0')
	{
		y[z] = *s;
		s++;
		z++;
	}

	z = 0;

	while (s > x)
	{
		s--;
		*s = y[z];
		z++;
	}
}
