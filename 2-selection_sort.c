#include "sort.h"

/**
 * selection_sort - sort array of integers in ascending order
 * using selection sort algorithm
 * @array: the array of integers
 * @size: the length of the array
*/
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size - 1; j++)
		{
			if (array[i] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[i];
				array[i] = temp;
			}
		}
		print_array(array, size);
	}
}
