#include "sort.h"

/**
 * bubble_sort - sorts an array of int in ascending order
 *
 * @array: the array to sort
 * @size: number of items in the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = size - 1; i > 0; i--)
	{
		for (j = 0; j < i; ++j)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
