#include "sort.h"
/**
 * bubble_sort - sorts the array of integers in ascending order
 *@array: The array tobe sorted
 *@size: The size of the array sorted
 *
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}

		}
	}
}
