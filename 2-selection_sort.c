#include "sort.h"

/**
 * selection_sort - sort array of integers in ascending order
 * using selection sort algorithm
 * @array: the array of integers
 * @size: the length of the array
*/
void selection_sort(int *array, size_t size)
{
	int min;
	size_t i, j, minPos;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		minPos = i;
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				minPos = j;
			}
		}
		if (minPos != i)
		{
			array[minPos] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
