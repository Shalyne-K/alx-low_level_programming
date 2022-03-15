#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 * Description: using putchar function only twice
 * Return: 0
 */
int main(void)
{
	char ch;

	ch = 'z';

	do {
		putchar(ch);
		ch--;
	} while (ch >= 'a');
	putchar('\n');
	return (0);
}
