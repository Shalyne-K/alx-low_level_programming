#include "main.h"

/**
 * _isupper - check if uppercase.
 * @c: ascii int value of the character to check
 *
 * Return: 1 if true else 0
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);

else
return (0);
}
