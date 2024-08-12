#include "main.h"
#include <stdio.h>

/**
 * _isupper - function check if letter is uppercase
 * @c: char to check
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    return (1);
    return (0);
    }