#include <stdio.h>
#include "main.h"

/**
 * main - checks code
 *
 * Returns: 0 Always succes.
 */

int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
