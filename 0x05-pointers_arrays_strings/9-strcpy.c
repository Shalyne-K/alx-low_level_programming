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
	int index, x;

	while (src[index] != '\0')
	{
		index++;
	}

	for (x = 0; x < index; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}
