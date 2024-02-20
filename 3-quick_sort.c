#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using the Quick
 * sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 **/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick(array, 0, size - 1, size);
}

/**
 * partition - partitions the array and swaps elements accordingly
 * @array: array to be sorted
 * @lb: lower bound index
 * @ub: upper bound index
 * @size: size of the array
 * Return: index of the pivot element
 **/
int partition(int *array, int lb, int ub, size_t size)
{
	int start = lb - 1;
	int end = lb;
	int pivot = array[ub];
	int temp = 0;

	for (; end < ub; end++)
	{
		if (array[end] < pivot)
		{
			start++;
			if (array[start] != array[end])
			{
				temp = array[start];
				array[start] = array[end];
				array[end] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[start + 1] != array[ub])
	{
		temp = array[start + 1];
		array[start + 1] = array[ub];
		array[ub] = temp;
		print_array(array, size);
	}
	return (start + 1);
}

/**
 * quick - recursive function to implement quick sort algorithm
 * @array: array to be sorted
 * @lb: lower bound index
 * @ub: upper bound index
 * @size: size of the array
 **/
void quick(int *array, int lb, int ub, size_t size)
{
	int pivot;

	if (lb < ub)
	{
		pivot = partition(array, lb, ub, size);
		quick(array, lb, pivot - 1, size);
		quick(array, pivot + 1, ub, size);
	}
}
