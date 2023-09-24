#include "sort.h"

/**
 * selection_sort - sorts an array of int in ascending order
 *
 * @array: the array to sort
 * @size: number of items in the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int min, temp;
	size_t i, j;

	for (i = 0; i < size; ++i)
	{
		min = i;
		for (j = i + 1; j < size; ++j)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (array[min] < array[i])
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
