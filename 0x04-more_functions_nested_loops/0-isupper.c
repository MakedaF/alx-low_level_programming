#include "main.h"
/**
 * _isupper - check if letter is uppercase
 * @x: the letter to be checked
 * Return: 1 for uppercase or 0 otherwise
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
