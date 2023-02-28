#include "main.h"
/**
 * _isdigit - checks for digit 0 through 9
 * @c: the number to be checked 
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	for (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
