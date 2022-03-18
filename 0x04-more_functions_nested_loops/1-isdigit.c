#include "main.h"

/**
 * _isdigit - check if is digit.
 * @c: ascii value to check
 *
 * Return: 1 if true else 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);

else
return (0);
}
