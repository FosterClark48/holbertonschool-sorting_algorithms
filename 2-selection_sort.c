#include "sort.h"
/**
 * selection_sort - sorts an array by selection sort
 * @array: pointer that points to array w/ elements to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, tmp, j, swp;

	for (i = 0; i < size - 1; i++)
	{
		swp = i;
		for (j = i + 1; j< size; j++)
		{
			if (array[j] < array[i] && array[j] < array[swp])
			{
				swp = j;
			}
		}
		if (swp != i)
		{
			tmp = array[i];
			array[i] = array[swp];
			array[swp] = tmp;
			print_array(array, size);
		}
	}
}
