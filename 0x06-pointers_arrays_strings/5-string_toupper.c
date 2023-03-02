#include "main.h"
/**
 * string_toupper - change string letters to uppercase
 * @str: the string to be considered
 * Return: a pointer to the changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
