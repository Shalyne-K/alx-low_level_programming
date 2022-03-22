#include "main.h"

/**
 * _strcpy - Function that copies *src inlcuding null byte--
 * \0 to *dest.
 * @src: Original string to be copied from
 * @dest: Pointer to destination of string
 * Return: Pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	char *anon = dest;

	while (*src != '\0')
		*dest++ = *src++;

	return (anon);
}
