#include "main.h"

/**
 * _strlen - Function that returns length of a string by pointer.
 * @s: A string pointer
 * Return: Length of a string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
