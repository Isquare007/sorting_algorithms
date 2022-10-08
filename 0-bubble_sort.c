#include "sort.h"

/**
 * bubble_sort - uses bubble sort to sort an array
 * @array: array to be sorted
 * @size: size of array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
