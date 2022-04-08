#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using at most--
 * --an n inputted no. of bytes.
 * @s1: the first string
 * @s2: the second string
 * @n: max no. of bytes of s2 to concatenate to s1.
 *
 * Return: NULL if function fails,
 *         Otherwise - pointer to newly concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatStr;
	unsigned int len_s1, len_s2, totalLen, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;

	if (n > len_s2)
		n = len_s2;

	totalLen = len_s1 + n;
	concatStr = malloc(totalLen + 1);

	if (concatStr == NULL)
		return (NULL);

	for (i = 0; i < totalLen; i++)
		if (i < len_s1)
			concatStr[i] = s1[i];
		else
			concatStr[i] = s2[i - len_s1];

	concatStr[i] = '\0';
	return (concatStr);
}
