#include "sort.h"
/**
 * bubble_sort - sorts the array of integers in ascending order
 *@array: The array tobe sorted
 *@size: The size of the array sorted
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, bubble;
	int swap;

	if (array == NULL || size < 2)
		return;
	j = size;
	while (j > 0)
	{
		bubble = 0;
		for (i = 0; i < j - 1; i++)
		{
			if (array[i] = array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				bubble = i + 1;
				print_array(array, size);
			}
		}
		j = bubble;
	}
}
