#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - Searches for a value in an array of integers
 *
 * @array: this is the element's in the list given
 * @size: The length of the list
 * @value: the number we are looking for
 *
 * Return: return i if successful but -1 if unsuccessful
 */
int linear_search(int *array, size_t size, int value);

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
