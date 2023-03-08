#include "main.h"
#include <stdiio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Returns natural square root of a number
 * @n: input number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Calculates natural square root
 * @n: input
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * 1;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
