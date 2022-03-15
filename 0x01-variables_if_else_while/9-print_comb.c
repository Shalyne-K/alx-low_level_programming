#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Description: using putchar function only four times
 * Numbers must be separated by ,, followed by a space
 * not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
>
