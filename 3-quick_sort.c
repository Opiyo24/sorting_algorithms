#include "sort.h"

/**
 * partition - determines an arbitrary point to partition
 * the array
 *
 * @array: array to be aprtitioned
 * @high: the high point
 * @low: low point
 *
 * Return: array index
*/

int partition(int *array, int low, int high)
{
	int i, j, pivot, temp;

	pivot = array[low];
	i = low;
	j = hight;

	while (i < j)
	{
		while (array[i] <= pivot)
			i++;
		while (array[j] > pivot)
			j--;

		if (i < j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}

	array[low] = array[j];
	array[j] = pivot;
	return (j);
}

/**
 * quick_sort - uses quick sort algorithm to sort an array
 *
 * @array: array to sort
 * @low: array index 0
 * @high: array index n
*/

void quick_sort(int *array, int low, int high);
{
	int j;

	if (low < high)
	{
		j = partition(array, low, high);
		quick_sort(array, low, j - 1);
		quick_sort(array, j + 1, hgh);
	}
}
