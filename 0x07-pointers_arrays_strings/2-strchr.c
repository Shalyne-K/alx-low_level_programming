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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*s(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
