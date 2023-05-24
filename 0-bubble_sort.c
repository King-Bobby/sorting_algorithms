#include "sort.h"

/**
 * bubble_sort - sorts array using bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i, temp = 0, swapped = 0, max;

	if (size < 2)
		return;

	max = size - 1;

	for (i = 0; i < max; i++)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			swapped = 1;
			print_array(array, size);
		}
		if (swapped == 1 && i == max - 1)
		{
			i = -1;
			swapped = 0;
			max -= 1;
		}
	}
}
