#include "search_algos.h"

/**
 * linear_search: linear search for value in an array
 *
 * Return: value if success, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{ return -1;
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{ return (int)i;
		}
	} return -1;
}
