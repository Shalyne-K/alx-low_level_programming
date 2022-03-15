#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Description: using putchar only 5 times
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * Numbers should be printed in ascending order
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	x = 0;

	while (x < 100)
	{
		y = x / 10; /* tens */
		y = x / 10; /* tens */

		if (y < z)
		{
			putchar(y + '0');
			putchar(z + '0');

			if (x < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		x++;
	}
	putchar('\n');
	return (0);
}
