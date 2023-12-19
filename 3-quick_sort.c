#include "sort.h"

/**
 * swap_int - swap two integers in an array
 * @array: the array
 * @idx1: first integer index
 * @idx2: second integer index
*/
void swap_int(int *array, int idx1, int idx2)
{
	int temp = array[idx1];

	array[idx1] = array[idx2];
	array[idx2] = temp;
}

/**
 * partition - rerange integers less than a chosen integer
 * of an array in ascending order
 * @array: the array
 * @size: length of array
 * @start: first index of array
 * @end: last index of array
 *
 * Return: index of the chosen integer
*/
int partition(int *array, size_t size, int start, int end)
{
	int i, j;

	for (j = start, i = start - 1; j != end; j++)
	{
		if (array[j] < array[end])
		{
			i++;
			if (i != j)
			{
				swap_int(array, i, j);
				print_array(array, size);
			}
		}
	}
	i++;
	if (array[j] < array[i])
	{
		swap_int(array, i, j);
		print_array(array, size);
	}

	return (i);
}

/**
 * sort - sort array of integers in ascending order recursively
 * @size: length of array
 * @array: the array
 * @start: first index of array
 * @end: last index of array;
*/
void sort(int *array, size_t size, int start, int end)
{
	int pivot_location;

	if (start < end)
	{
		pivot_location = partition(array, size, start, end);
		sort(array, size, start, pivot_location - 1);
		sort(array, size, pivot_location + 1, end);
	}
}

/**
 * quick_sort - sort array of integers in ascending order
 * @array: the array
 * @size: the length of the array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	sort(array, size, 0, (int)size - 1);

	print_array(array, size);
}
