#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 * Description: using putchar only six times
 * Numbers must be separated by , followed by a space
 * The three digits must be different
 * Print only the smallest combination of three digits
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* unit */

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
