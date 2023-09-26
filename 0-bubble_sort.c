#include "sort.h"

/**
 * swap_int - swaos two integers
 *
 * @a: first integer
 * @b: second integer
 * @Return: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - uses the bubble sort algorithm to sort an
 * array
 *
 * @array: the array to be sorted
 * @size: size of the srray
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] <= array[j + 1])
			{
				continue;
				print_array(array, size);
			}

			if (array[j] > array[j + 1])
			{
				swap_int(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
