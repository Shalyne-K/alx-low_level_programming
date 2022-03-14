#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Description: using putchar function
 * Only use putchar twice
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
