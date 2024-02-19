#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 * @size: The size of the array
 **/
void selection_sort(int *array, size_t size)
{
	size_t imin;
	size_t i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		imin = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[imin])
			{
				imin = j;
			}
		}
		if (i != imin)
		{
			temp = array[i];
			array[i] = array[imin];
			array[imin] = temp;
			print_array(array, size);
		}
	}
}
