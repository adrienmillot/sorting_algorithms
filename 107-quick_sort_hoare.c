#include "sort.h"

void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort_hoare(array, 0, size - 1, size);
}

void quicksort_hoare(int *array, int low, int high, size_t size)
{
	int index;

	if (low < high)
	{
		index = partition_hoare(array, low, high, size);
		quicksort_hoare(array, low, index - 1, size);
		quicksort_hoare(array, index, high, size);
	}
}

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition_hoare(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j = high;

	do
	{
		i += 1;
		while (array[i] < pivot)
		{
			i += 1;
		}
		while (array[j] > pivot)
		{
			j-= 1;
		}
		if (i < j)
		{
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	} while (i < j);
	return (i);
}
