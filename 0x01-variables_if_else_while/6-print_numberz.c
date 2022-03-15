#include <stdio.h>

/**
 * main - print single digit no.s of base 10 without using char
 * Description: Only use the putchar function twice
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i+0);
	}
	putchar('\n');
	return (0);
}
