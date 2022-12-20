#include "sort.h"
/**
 * quick_sort - sorts an array using the quick sort algorithm
 * @array: pointer to int array
 * @size: size of int array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	rec_quick_sort(array, 0, size - 1, size);
}
/**
 * rec_quick_sort - recursive function for sorting array
 * @array: pointer to int array
 * @start: starting index
 * @end: ending index
 * @size: size of the array
 * Return: Nothing
 */
void rec_quick_sort(int *array, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		rec_quick_sort(array, start, pivot - 1, size);
		rec_quick_sort(array, pivot + 1, end, size);
	}
}
/**
 * partition - partitions array, swaps values, and prints
 * @array: pointer to integer array
 * @start: starting index
 * @end: ending index
 * @size: size of the array
 * Return: Nothing
 */
int partition(int *array, size_t start, size_t end, size_t size)
{
	size_t i = start - 1;
	size_t j;
	int tmp = 0;
	int tmp2 = 0;
	size_t place = 0;

	for (j = start; j < end; j++)
	{
		if (array[j] < array[end])
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (array[j] != array[i])
				print_array(array, size);
		}
	}
	i++;
	place = i;
	tmp2 = array[i];
	array[i] = array[end];
	array[end] = tmp2;
	if (array[j] != array[i])
		print_array(array, size);
	return (place);
}
