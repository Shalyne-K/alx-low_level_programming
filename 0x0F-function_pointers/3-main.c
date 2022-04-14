#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int a, b;

	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func_ptr = get_op_func(argv[2]);
	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", func_ptr(a, b));
	return (0);
}
