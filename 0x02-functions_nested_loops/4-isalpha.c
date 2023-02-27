#include "main.h"
/**
 * int_isalpha - checks for alphabetic character
 * @c: The character being checked 
 * Return: 1 if c is a letter
 * or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
