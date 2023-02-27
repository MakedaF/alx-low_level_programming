#include "main.h"

/**
 * int_islower(int c) - checks for lowercase character
 *
 * Return: 1 is c is lowercase
 * or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}