#include "sort.h"

/**
 * selection_sort - sorts an array using selection sort
 *
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	int y, x;

	for (y = 0; y < size; y++)
	{
		for (x = (y + 1); x < size; x++)
		{
			if (array[x] < array[y])
			{
				swap_int(&array[x], &array[y]);
			}
		}
		print_array(array, size);
	}
}
