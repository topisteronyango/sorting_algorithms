#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array to be sorted
 * @size: number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, idy, min_idy;
	int tmp, switched = 0;

	for (i = 0; i < size - 1; i++)
	{
		switched = 0;
		min_idy = i;
		for (idy = i + 1; idy < size; idy++)
		{
			if (array[idy] < array[min_]idy])
			{
				min_idy = idy;
				switched = 1;
			}
		}
		if (switched)
		{
			tmp = array[i];
			array[i] = array[min_idy];
			array[min_idy] = tmp;
			print_array(array, size);
		}
	}
}
