#include <stdio.h>

/**
 * main - print all single digit no.s of base 10 starting from 0
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 0; ch < 10; ch++)
	{
		printf("%d", ch);
	}
	putchar('\n');
	return (0);
}
