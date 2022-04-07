#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: A string
 * @src: A string
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *conc_string = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (conc_string);
}
