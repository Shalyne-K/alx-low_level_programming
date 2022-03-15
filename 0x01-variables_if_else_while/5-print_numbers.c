#include <stdio.h>

/**
 * main - print all single digit no.s of base 10 starting from 0
 * Description: using the main function
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
