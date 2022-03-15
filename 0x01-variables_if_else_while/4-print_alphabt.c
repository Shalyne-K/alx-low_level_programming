#include <stdio.h>

/**
 * main - print all letters in lowercase except q and e
 * Description: using putchar function
 * Only use purchar twice
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
		}
		else
		{
			putchar(ch);
		}
	}
		putchar('\n');
		return (0);
}
