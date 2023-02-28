#include "main.h"
/**
 * _isdigit - checks is character is a digit
 * @x: the number to be checked 
 * Return: 1 for a character that will be a digit or 0 otherwise
 */

int _isdigit(int x)
{
	for (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
