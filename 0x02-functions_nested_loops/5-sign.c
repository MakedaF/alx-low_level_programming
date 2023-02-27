#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number to be checked
 * Return: 1 and print + if n is greater than zero,
 * 0 and print 0 is n is zero
 * or -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(40);
		return (0);
	}
}
