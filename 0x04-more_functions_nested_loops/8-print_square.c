#include "main.h"

/**
 * print_square - Print square using # based on input.
 * @n : The user inputu
 * Return: Void.
 */
void print_square(int n)
{
int x;
int y;

for (y = 0; y < n; y++)
{
for (x = 0; x < n; x++)
{
_putchar('#');
}
_putchar('\n');
}
if (n <= 0)
{
_putchar('\n');
}
}
