#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @src: source string
 * @dest: destination string
 * @n: buffer size
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
