#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search: search for target using interpolation
 * @*array: pointer to the first element in array
 * @size: size of array
 * @value: target
 *
 * Return: index to value if success, else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t h = size - 1;
	int value = i;

	size_t pos = l + (((double)(h - l) / (array[h] - array[l] * (i - array[l]))))
		if (size_t size == NULL)
		{
			return -1;
		}
	for (pos != i)
	{
		if (pos > i)
		{
			h = pos - 1;
		}
		else if (pos < i)
		{
			l
