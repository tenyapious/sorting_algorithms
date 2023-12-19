#include "sort.h"

/**
 * selection_sort - sort array of integers in ascending order
 * using selection sort algorithm
 * @array: the array of integers
 * @size: the length of the array
*/
void selection_sort(int *array, size_t size)
{
	int min, minPos;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		minPos = i;
		for (j = i; j < size - 1; j++)
		{
			if (min > array[j + 1])
			{
				min = array[j + 1];
				minPos = j + 1;
			}
		}
		if (array[i] > min)
		{
			array[minPos] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
