#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: source string
 * @c: character to be located
 *
 * Return: pointer to c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (0);
}
