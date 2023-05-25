#include "sort.h"

/**
 * selection_sort - sorts array using selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min, temp, max = size - 1;

	for (i = 0; i < max; i++)
	{
		min = i;

		for (j = i + 1; j <= max; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
