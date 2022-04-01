#include "main.h"

/**
 * _strlen_recursion - a function that obtains the length of a string s.
 * @s: string pointer paramenter
 * Return: length of the string s.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * helper_palindrome - a function with a reversed string
 * @s: string pointer parameter
 * @len: length of the string
 * Return: boolena
 */

int helper_palindrome(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}

	if (*s == *(s + len))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome - a function that checks if s is a palindrome string.
 * @s: string pointer parameter
 * Return: 1 if string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (helper_palindrome(s, len - 1));
}
