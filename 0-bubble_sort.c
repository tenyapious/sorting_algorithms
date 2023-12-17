#include "sort.h"

/**
 * bubble_sort - sort array of integers
 * @array: pointer to the array
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp, unsorted = 1;

	while (unsorted)
	{
		unsorted = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				unsorted = 1;
			}
		}
	}
}
