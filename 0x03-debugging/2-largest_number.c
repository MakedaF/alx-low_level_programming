#include <stdio.h>
#include "main.h"

/**
 *  largest_number - returns the largest of 3 integers
 *  @a: first integer
 *  @b: second intiger
 *  @c: third intiger
 *  Return: largest integer
 *  */

int largest_number(int a, int b, int c)
{
        int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
        return (largest);
}
