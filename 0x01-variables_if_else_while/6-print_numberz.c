#include <stdio.h>

/**
 * main - print single digit no.s of base 10 without using char
 * Description: Only use the putchar function twice
 * Return: 0
 */
int main(void)
{
	int x;

	do {
		putchar(x + '0');
		x++;
	} while (x <= 9);
	putchar('\n');
	return (0);
}
