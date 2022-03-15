#include <stdio.h>

/**
 * main - print alphabet in lowercase then in uppercase
 * Description: using putchar function
 * Only use putchar thrice
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar('\n');
	}
	return (0);
}
