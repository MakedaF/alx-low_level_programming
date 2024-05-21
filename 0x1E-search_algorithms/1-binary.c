#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search: performs binary search on array
 * *array: pointer to first element in array
 * size: size of array
 * value: the target
 *
 * Return: value if success, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t i = l;

	if (array == NULL)
	{ return -1;
	}
	while (l <= r)
	{
		size_t mid = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d ", array[i]);
			}
		}
		printf("\n");
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{ return mid;
		}
	} return -1;
}
