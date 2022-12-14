#include "main.h"

/**
 * _islower - check for lower case character
 * @c:an integer parameter
 *
 * Return: (1) if c  is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
